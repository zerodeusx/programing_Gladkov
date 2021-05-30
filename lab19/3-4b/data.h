#pragma once

#include <stdio.h>
#include <stdlib.h>
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
    size_t agency_age;
    char servicing_city[50];

    struct Agency *next;
};

void link_creator(struct Agency *to_add);

void agency_filler(struct Agency *to_fill);