#include "RLEList.h"
#include <stdlib.h>
typedef struct {
    //TODO: check the name
    char letter;
    int count;
    struct RLEList_t* next;
} RLEList_t;

RLEList RLEListCreate(){
    RLEList new = (RLEList)malloc(sizeof(RLEList_t));
    new.letter = '\0';
    if (!new){
        return NULL;
    }
    return new;
}

void RLEListDestroy(RLEList list){
    if (list){
        free(list);
    }
}
RLEListResult RLEListAppend(RLEList list, char value){

}
//implement the functions here