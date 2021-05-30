#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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


void append(struct Agency** head_ref);

void push(struct Agency** head_ref);

void insertAfter(struct Agency* prev_node);

void printList(struct Agency* node);

void bubbleSort(struct Node *start);

void swap(int *a, int *b);

void test_append();

void print_node(struct Node *start);

void insertAtTheBegin(struct Node **start_ref, int data);
