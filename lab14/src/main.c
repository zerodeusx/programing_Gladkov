/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** програму з показчиками
 *
 * 2. **Визначити** чи є в масиви елементи, що повторюються, якщо є, то створити масив, в якому вказати скiльки разiв якi елементи повторюються.
 *
 * 3. **Добавити I/O до **
 *
 * @author Gladkov K.
 * @date 11-jan-2020
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

    printf("Program was made by Gladkov Kostyantyn for 14th lab work which is about working with files.\n");

    //Initializing array
    int main_arr[N] = {0};

    read_from_user_file(main_arr);

    int array_size = size(main_arr);

    counter(array_size, main_arr);

    //_CrtDumpMemoryLeaks();

    return 0;
}