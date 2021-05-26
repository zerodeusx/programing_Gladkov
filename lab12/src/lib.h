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
//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


/**
*  Кiлькiсть елементiв у масивi
*/
#define N 6

/**
* підрахунок відповідних елементів
*/

void counter(int size, int* arr);

/**
* Довжина масиву
*/
int size(int* arr);

void qna();
