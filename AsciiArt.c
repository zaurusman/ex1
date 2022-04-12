//
// Created by Elad on 11/04/2022.
//

#include "RLEList.h"
#define BUFFER_SIZE 256

RLEList asciiArtRead(FILE* in_stream){
    RLEList compressedStr = RLEListCreate();
    if (compressedStr == NULL){
        return NULL;
    }
    char buffer[CHUNK_SIZE];
    while (fgets(buffer, CHUNK_SIZE, in_stream) != NULL){
        int index = 0;
        while(index <= 255 || *(buffer){
            if (RLEListAppend(compressedStr, buffer[index])!=RLE_LIST_SUCCESS){
                return NULL;
            }
            index++;
        }
    }
    return compressedStr;
}

RLEListResult asciiArtPrint(RLEList list, FILE *out_stream){
    RLEListResult result;
    char* str = RLEListExportToString(list, &result);
    if (result != RLE_LIST_SUCCESS){
        return result;
    }
    if (fputs(str, out_stream) == EOF){
        return RLE_LIST_ERROR;
    }
    return RLE_LIST_SUCCESS;
}