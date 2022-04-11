#include "RLEList.h"
#include <stdlib.h>

typedef struct RLEList_t {
    //TODO: check the name
    char letter;
    int count;
    struct RLEList_t* next;
} RLEList_t;

RLEList RLEListCreate(){
    RLEList new = (RLEList)malloc(sizeof(RLEList_t));
    if (!new){
        return NULL;
    }
    new -> letter = '\0';
    new -> next = NULL;
    new -> count = 0;
    return new;
}

void RLEListDestroy(RLEList list){
    if (list){
        free(list);
    }
}
RLEListResult RLEListAppend(RLEList list, char value){
    if (list == NULL || value == NULL){
        return RLE_LIST_NULL_ARGUMENT;
    }
    while (!(list->next)){
        list = list->next;
    }
    if (list->letter == value){
        list->count++;
    }
    else{
        list->next = RLEListCreate();
        if (!(list->next)){
            return RLE_LIST_OUT_OF_MEMORY;
        }
        list = list->next;
        list->letter = value;
        (list->count)++;
        return RLE_LIST_SUCCESS;
    }
}
int RLEListSize(RLEList list)
{
    int size=0;
    if (!list){
        return -1;
    }
    while(list)
    {
        size+=list->count;
        list = list->next;
    }
    return size;
}

static RLEList GoToIndex(RLEList list, int* index){ //Need to document, possibly in interface?
    while (list && (*index)>0) {
        *index = *index - (list->count);
        list = list->next;
    }
    if (list == NULL){
        return NULL;
    }
    else{
        return list;
    }
}

RLEListResult RLEListRemove(RLEList list, int index)
{
    if(!list||!index){
        return RLE_LIST_NULL_ARGUMENT ;
    }
    index -= 1;
    RLEList previous = GoToIndex(list, &index);
    if ((previous == NULL) || (index == 0 && previous->next == NULL)){
        return RLE_LIST_INDEX_OUT_OF_BOUNDS;
    }
    list = (index == 0)? list->next : previous;
    (list->count)--;
    if(list->count==0)
    {
        previous->next=list->next;
        free(list);
    }
    return RLE_LIST_SUCCESS;
}

char RLEListGet(RLEList list, int index, RLEListResult *result){
    if (list == NULL || index == NULL || result == NULL){
        if (result != NULL){
            *result = RLE_LIST_NULL_ARGUMENT;
            }
        return 0;
    }
    list = GoToIndex(list, &index);
    if(list == NULL){
        *result = RLE_LIST_INDEX_OUT_OF_BOUNDS;
        return 0;
    }
    *result = RLE_LIST_SUCCESS;
    return list->letter;

}

//implement the functions here