#include "../src/lib.h"

void test_write_struct_to_txt(){

    struct Agency testing = {0, "Kostya", "Gladkov", "xd@gmail.com", "help", 10, "Kharkov"};

    char path[50] = "/home/blank/test.txt";

    write_struct_to_txt(&testing, 1, path);

    struct Agency temp;

    FILE* file;
    file = fopen(path, "r");

    char buffer[30];


    for (int i = 0; i < 1; i++) {
        fscanf(file, "%d", &temp.have_weekends);
        fscanf(file, "%s", temp.agency_boss.first_name);
        fscanf(file, "%s", temp.agency_boss.second_name);
        fscanf(file, "%s", temp.agency_boss.email);
        fscanf(file, "%s", temp.agency_name);
        fscanf(file, "%d", &temp.agency_age);
        fscanf(file, "%s", temp.servicing_city);
    }

    fclose(file);

    if (strcmp(temp.agency_boss.first_name, testing.agency_boss.first_name) == 0){
        printf("agency_boss.first_name are equal.\n");
    }
    else {
        printf("agency_boss.first_name aren't equal.\n");
    }
    if (strcmp(temp.agency_boss.second_name, testing.agency_boss.second_name) == 0){
        printf("agency_boss.second_name are equal.\n");
    }
    else {
        printf("agency_boss.second_name aren't equal.\n");
    }
    if (strcmp(temp.agency_boss.email, testing.agency_boss.email) == 0){
        printf("agency_boss.email are equal.\n");
    }
    else {
        printf("agency_boss.email aren't equal.\n");
    }
    if (temp.agency_age == testing.agency_age){
        printf("agency_age are equal.\n");
    }
    else {
        printf("agency_age aren't equal.\n");
    }
    if (strcmp(temp.servicing_city, testing.servicing_city) == 0){
        printf("servicing_city are equal.\n");
    }
    else {
        printf("servicing_city aren't equal.\n");
    }
    if (temp.have_weekends == testing.have_weekends){
        printf("have_weekends are equal.\n");
    }
    else {
        printf("have_weekends aren't equal.\n");
    }
    if (strcmp(temp.agency_name, testing.agency_name) == 0){
        printf("agency_name are equal.\n");
    }
    else {
        printf("agency_name aren't equal.\n");
    }

}