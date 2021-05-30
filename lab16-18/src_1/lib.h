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

/**
*  виделення
*/

void reduce(char* mass, int indexStart, int indexEnd);
/**
*  вставка
*/
char* insert(char* mass, char* mass2, int index);