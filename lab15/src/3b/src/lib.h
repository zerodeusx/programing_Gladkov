//
// Created by blank on 2/28/21.
//

#pragma once

#define SIZE 30

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

enum weekends {Yes, No};

struct boss{
    char first_name[SIZE];
    char second_name[SIZE];
    char email[SIZE];
};

struct Agency{
    enum weekends have_weekends;
    struct boss agency_boss;
    char agency_name[SIZE];
    size_t agency_age;
    char servicing_city[SIZE];
};

void structure_reader(char* path, int amount, struct Agency *our_agency);

void structure_writer(char* path);

void structure_printer(struct Agency *our_agency, int amount);

void testing_structure_writer(char* path, struct Agency agency_to_test);