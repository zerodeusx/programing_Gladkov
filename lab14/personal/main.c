/**
 * @mainpage
 * # Загальне завдання
 * 1. **Зробити** tree
 *
 * @author Gladkov K.
 * @date 14-feb-2020
 * @version 1.0
 */

/**
* @file main.c
* @brief Файл з main, який також викликае функцii
*
* @author Gladkov K.
* @date 14-feb-2020
* @version 1.0
*/


#include "lib.h"

int main()
{

    printf("Program was made by Gladkov Kostyantyn for 14th lab work which is about working with files.\n");

    // Directory path to list files
    char path[100];

    printf("Enter path to list files: ");
    scanf("%s", path);

    tree(path, 0);
    dir_size(path);

    return 0;
}

