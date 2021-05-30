/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** функцию зи ставкою в рядок, виделенням, також використовувати memcpy i memset
 *
 * @author Gladkov K.
 * @date 11-jan-2021
 * @version 1.0
 */

/**
* @file main.c
* @brief Файл з main, який також викликае функцii
*
* @author Gladkov K.
* @date 11-jan-2020
* @version 1.0
*/
#include "lib.h"

int main() {

    char* mass = (char*)malloc(20 * sizeof(char));

    strcat(mass, "abrakadabra");
    char mass2[6] = "TEXT2";

    mass = insert(mass, mass2, 4);
    reduce(mass,4,8);

    return 0;
}

