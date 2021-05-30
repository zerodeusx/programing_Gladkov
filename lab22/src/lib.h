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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <regex.h>

#define TASK()  time_t time1 = time(NULL);\
				printf("Function %s. Time %s ", __func__, ctime(&time1))

#define TIME_CHECK(start,end) printf("Program worked for %d seconds\n",(end)-(start))

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

    struct Agency *next;
    struct Agency *prev;
};

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


/**
*  добавлення
*  @param head_ref - куда 
*/
void append(struct Agency** head_ref);

/**
*  добавлення в кинець
* @param head_ref - куда
*/
void push(struct Agency** head_ref);

/**
*  Доблавення пiсля елемента
* @param prev_node - пiсля якого
*/

void insertAfter(struct Agency* prev_node);

/**
*  вивод на екран
* @param to_print - що виводити
*/

void printList(struct Agency* to_print);

/**
*  сортировка
* @param start - звiдки
*/
void bubbleSort(struct Node *start);

/**
*  змiна мiстами
*/

void swap(int *a, int *b);

/**
*  тест
*/

void test_append();

/**
*  вивод першого
* @param start - звiдки
*/

void print_node(struct Node *start);

/**
*  вставка у начало
* @param start_ref - звiдки
* @param data - що
*/

void insertAtTheBegin(struct Node **start_ref, int data);
