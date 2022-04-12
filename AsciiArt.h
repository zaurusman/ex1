//
// Created by Elad on 11/04/2022.
//

#ifndef EX1_ASCIIART_H
#define EX1_ASCIIART_H


#include <stdio.h>
#include <stdbool.h>


/**
* Ascii Art Compressor
*
*
* The following functions are available:
*   asciiArtRead	        - Reads the given file and compresses it to RLEList
*   asciiArtPrint		    - Writes a RLEList image to a given file.
*   asciiArtPrintEncoded    - Writes to a file the compressed image.
*/


/**
* asciiArtRead: Reads the given file and compresses it to a RLEList.
*
* @parameters:
*   in_stream - a FILE* object which has the image about to be compressed.
*
* @return
* 	NULL if the compression failed.
* 	A new RLEList in case of success.
*/
RLEList asciiArtRead(FILE* in_stream)

/**
* asciiArtPrint: Writes a RLEList compressed image to a given file.
*
* @parameters:
*   list - a RLEList object which has all the chars of the image.
*   out_stream - a FILE* object which will hold the image.
*
* @return
* 	RLE_LIST_SUCCESSES in case of success.
*   RLE_List_ERROR if the string was not been able to be written to the file.
*   RLE_List_NULL_ARGUMENT if the list is NULL.
*/
RLEListResult asciiArtPrint(RLEList list, FILE *out_stream)

/**
* asciiArtPrintEncoded: Writes to a file the compressed image.
*
* @parameters:
*   list - a RLEList object which has all the chars of the image.
*   out_stream - a FILE* object which will hold the compressed image.
*
* @return
* 	RLE_LIST_SUCCESSES in case of success.
*   RLE_List_ERROR if the string was not been able to be written to the file.
*   RLE_List_NULL_ARGUMENT if the list is NULL.
*/
RLEListResult asciiArtPrintEncoded(RLEList list, FILE *out_stream)



#endif //EX1_ASCIIART_H
