/**
 * @file lib.h
 * @brief Прототипи функцій
 *
 *
 * @author Gladkov K.
 * @date 11-jan-2020
 * @version 1.0
 */
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum weekends{Yes, No};

/**
* структура про босса
*/
struct boss{
    char first_name[50];
    char second_name[50];
    char email[50];
};
/**
* головна структура
*/
struct Agency{
    enum weekends have_weekends;
    struct boss agency_boss;
    char agency_name[50];
    int agency_age;
    char servicing_city[50];
};

/**
* добавлення елемента
*/

void struct_appender(struct Agency* from, struct Agency* to, int old_size, int new_size);

/**
* виделення елемента
*/

void struct_remover(struct Agency* from, struct Agency* to, int old_size, int new_size);

/**
* тест
*/

void test_struct_appender();

/**
* читання
*/
void agency_reader(struct Agency *agency, int size);
