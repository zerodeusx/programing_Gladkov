//
// Created by blank on 2/26/21.
//
#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// SIZE - amount of names (first and second) and also amount of emails
#define SIZE 5

// N - amount of possible agency names
#define N 10

// AMOUNT_OF_CITIES - amount of cities
#define AMOUNT_OF_CITIES 3

// SERVICES - amount of services
#define SERVICES 2

// COOPERATION - amount of possible cooperation countries
#define COOPERATION 3

// VARIANT - my variant in the list
#define VARIANT 90

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

struct Law_agency{
    struct Agency agency_for_law;
    char service_type[50];
    size_t won_cases;
};

struct Marriage_agency{
    struct Agency agency_for_marriages;
    char servicing_method[50];
    char cooperation_country[50];
};

void generate_law_agencies(struct Law_agency *fill_law_agencies,int amount_of_law_agencies);
void generate_marriage_agencies(struct Marriage_agency *fill_marriage_agencies,int amount_of_mar_agencies);

// Checks if number is positive
void number_checker(int number);

void menu(struct Law_agency* l_agencies, struct Marriage_agency* m_agencies, int l_amount, int m_amount);

void kharkov_agencies(struct Law_agency* l_agencies, struct Marriage_agency* m_agencies, int l_amount, int m_amount);

void defence_in_court_law_agencies(struct Law_agency* agencies, int l_amount);

void no_weekends_mar_agencies(struct Marriage_agency* agencies, int m_amount);

void law_agency_reader(struct Law_agency *agency, int size);

void mar_agency_reader(struct Marriage_agency *agency, int size);

void test_defence_in_court_law_agencies2();

// void defence_in_court_law_agencies(struct Law_agency *agencies, int l_amount);