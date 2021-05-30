#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @file lib.h
 * @brief Прототипи функцій
 *
 *
 * @author Gladkov K.
 * @date 11-jan-2021
 * @version 1.0
 */

enum weekends{Yes, No};

struct boss{
    char first_name[50];
    char second_name[50];
    char email[50];
};

struct Agency{
    enum weekends have_weekends;
    struct boss agency_boss;
    char agency_name[50];
    size_t agency_age;
    char servicing_city[50];
};

/**
*  записує агенство
* @param agency - куди
* @param size - скильки
*/
void agency_writer(struct Agency *agency, int size);

/**
*  читання агенства
* @param agency - звидки
* @param size - скильки
*/
void agency_reader(struct Agency *agency, int size);
/**
*  запис структури у текстовий файл
* @param agency - куди
* @param size - скильки
*/
void write_struct_to_txt(struct Agency *agency, int size, char path[]);
/**
*  читання структури з текстового файлу
* @param agency - звидки
* @param size - скильки
*/
void read_struct_from_txt(struct Agency *agency, int size, char path[]);
/**
*  запис структури у бинарник
* @param agency - куди
* @param size - скильки
*/
void write_struct_to_bin(struct Agency *agency, int size, char path[]);
/**
*  читання структури з бинарника
* @param agency - звидки
* @param size - скильки
*/
void read_struct_from_bin(struct Agency *agency, int size, char path[]);
/**
*  читання по индексу
* @param size - index
*/
void index_reader(int size);
/**
*  тест
*/
void test_write_struct_to_txt();
/**
*  килькисть структур
*/
int struct_amount();



