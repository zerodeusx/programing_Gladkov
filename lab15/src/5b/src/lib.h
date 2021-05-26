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
};

void agency_writer(struct Agency *agency, int size);

void agency_reader(struct Agency *agency, int size);

void write_struct_to_txt(struct Agency *agency, int size, char path[]);

void read_struct_from_txt(struct Agency *agency, int size, char path[]);

void write_struct_to_bin(struct Agency *agency, int size, char path[]);

void read_struct_from_bin(struct Agency *agency, int size, char path[]);

void index_reader(int size);

void test_write_struct_to_txt();

int struct_amount();



