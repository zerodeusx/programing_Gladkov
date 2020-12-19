/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 * 
 *
 * @author Gladkov K.
 * @date 11-dec-2020
 * @version 1.0
 */


#include "lib.h"


int size_counter(char text[]) {

    char spacer[] = " ";
    char* res = strtok_s(text, spacer);
    int count = 0;


    //counts the variable count with the help of spacers
    while (res != NULL)
    {
        count++;
        res = strtok(NULL, spacer);
    }

    return count;
}