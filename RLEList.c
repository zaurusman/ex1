#include "RLEList.h"
#include <stdlib.h>
#include <string.h>

#define SPACE_PER_LETTER 2
typedef struct RLEList_t {
    char letter;
    int count;
    struct RLEList_t* next;
} RLEList_t;

RLEList RLEListCreate(){
    RLEList new = (RLEList)malloc(sizeof(*new));
    if (new==NULL){
        return NULL;
    }
    new -> letter = '\0';
    new -> next = NULL;
    new -> count = 0;
    return new;
}

void RLEListDestroy(RLEList list){
    while (list){
        RLEList toBeDestroyed = list;
        list = list -> next;
        free(toBeDestroyed);
    }
}
RLEListResult RLEListAppend(RLEList list, char value){
    if (list == NULL || !value)
    {
        return RLE_LIST_NULL_ARGUMENT;
    }
    while ((list->next)!=NULL){
        list = list->next;
    }
    if (list->letter == value){
        list->count++;
    }
    else{
        list->next = RLEListCreate();
        if ((list->next)==NULL){
            return RLE_LIST_OUT_OF_MEMORY;
        }
        list = list->next;
        list->letter = value;
        (list->count)=1;
    }
    return RLE_LIST_SUCCESS;
}
int RLEListSize(RLEList list)
{
    int size=0;
    if (list==NULL){
        return -1;
    }
    while(list)
    {
        size+=list->count;
        list = list->next;
    }
    return size;
}
//Returns the pointer to the node of the requested index
//indexes start at 1
//also decreases index, negative index means the next letters are the same, 0 means the next letter is different.
static RLEList GoToIndex(RLEList list, int* index){
    if (*index == 0){
        return list;
    }
    list = list -> next;
    while (list) {
        *index = *index - (list->count);
        if((*index)<=0){
            break;
        }
        list = list->next;
    }
    return list;
}

RLEListResult RLEListRemove(RLEList list, int index)
{
    if(list==NULL)
    {
        return RLE_LIST_NULL_ARGUMENT;
    }
    if(index<0)
    {
        return RLE_LIST_ERROR;
    }
    RLEList previous = GoToIndex(list, &index);
    if ((previous == NULL) || (index == 0 && previous->next == NULL)){
        return RLE_LIST_INDEX_OUT_OF_BOUNDS;
    }
    if (index == 0){
        list = previous -> next;
        list -> count--;
        if (list->count == 0){
            previous->next = list->next;
            free(list);
        }
    }
    else
    {
    previous->count--;
    }
    return RLE_LIST_SUCCESS;
}

char RLEListGet(RLEList list, int index, RLEListResult *result){
    if (list == NULL){
        if (result != NULL){
            *result = RLE_LIST_NULL_ARGUMENT;
            }
        return 0;
    }
    index++;
    list = GoToIndex(list, &index);
    if(list == NULL&&result!=NULL){
        *result = RLE_LIST_INDEX_OUT_OF_BOUNDS;
        return 0;
    }
    if(result!=NULL) {
        *result = RLE_LIST_SUCCESS;
    }
    return list->letter;
}

char* RLEListExportToString(RLEList list, RLEListResult* result)
{
    if (list == NULL || result == NULL || list->next == NULL){
        if (result != NULL){
            *result = RLE_LIST_NULL_ARGUMENT;
        }
        return NULL;
    }
    int letter_count = 0;
    char* str = (char*)malloc(sizeof('\0'));
    if (str == NULL){
        *result = RLE_LIST_OUT_OF_MEMORY;
        return NULL;
    }
    while (list->next != NULL) {
        letter_count++;
        str = (char*)realloc(str, sizeof(str)+SPACE_PER_LETTER);
        if(str == NULL){
            *result = RLE_LIST_OUT_OF_MEMORY;
            return NULL;
        }
        list = list -> next;
        strcat(str, &list->letter);
        char count = (char)list->count; //doesn't work for numbers higher than 9, fix.
        strcat(str+1, &count);
        str+=SPACE_PER_LETTER;
    }
    str++;
    *str = '\0';
    str-=letter_count*SPACE_PER_LETTER;
    return str;
}

RLEListResult RLEListMap(RLEList list, MapFunction map_function)
{
    if(list==NULL || map_function==NULL)
    {
        return RLE_LIST_NULL_ARGUMENT;
    }
    while(list)
    {
        list->letter = map_function(list->letter);
        list = list->next;
    }
    return RLE_LIST_SUCCESS;
}

