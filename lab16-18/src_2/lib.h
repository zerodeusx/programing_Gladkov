#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
    int agency_age;
    char servicing_city[50];
};

void struct_appender(struct Agency* from, struct Agency* to, int old_size, int new_size);

void struct_remover(struct Agency* from, struct Agency* to, int old_size, int new_size);

void test_struct_appender();

void agency_reader(struct Agency *agency, int size);
