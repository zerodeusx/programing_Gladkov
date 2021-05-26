#include "../src/lib.h"

void testing_structure_writer(char* path, struct Agency agency_to_test){

    FILE* file;
    file = fopen(path, "r");

    struct Agency test_new_agency;

    printf("Path: %s\n\n", path);

    fscanf(file, "%d\n", &test_new_agency.have_weekends);
    fscanf(file, "%s\n", test_new_agency.agency_boss.first_name);
    fscanf(file, "%s\n", test_new_agency.agency_boss.second_name);
    fscanf(file, "%s\n", test_new_agency.agency_boss.email);
    fscanf(file, "%s\n", test_new_agency.agency_name);
    fscanf(file, "%zd\n", &test_new_agency.agency_age);
    fscanf(file, "%s\n", test_new_agency.servicing_city);

    printf("\n");

    struct Agency copy_of_old_agency = agency_to_test;

    printf("Expected: %d %s %s %s %s %zu %s", test_new_agency.have_weekends, test_new_agency.agency_boss.first_name, test_new_agency.agency_boss.second_name, test_new_agency.agency_boss.email, test_new_agency.agency_name, test_new_agency.agency_age, test_new_agency.servicing_city);
    printf("\nActual: %d %s %s %s %s %zu %s\n", copy_of_old_agency.have_weekends, copy_of_old_agency.agency_boss.first_name, copy_of_old_agency.agency_boss.second_name, copy_of_old_agency.agency_boss.email, copy_of_old_agency.agency_name, copy_of_old_agency.agency_age, copy_of_old_agency.servicing_city);

    int counter = 0;

    if (test_new_agency.have_weekends == copy_of_old_agency.have_weekends){
        printf("\n1 test has passed!\n");
        counter++;
    }
    else{
        printf("\n1 test has failed\n");
        printf("Expected: %d, \nActual: %d", test_new_agency.have_weekends, copy_of_old_agency.have_weekends);
    }
    if (strcmp(test_new_agency.agency_boss.first_name, copy_of_old_agency.agency_boss.first_name) == 0){
        printf("2 test has passed!\n");
        counter++;
    }
    else{
        printf("2 test has failed");
        printf("strcmp result: %d", strcmp(test_new_agency.agency_boss.first_name, copy_of_old_agency.agency_boss.first_name));
    }
    if (strcmp(test_new_agency.agency_boss.second_name, copy_of_old_agency.agency_boss.second_name) == 0){
        printf("3 test has passed!\n");
        counter++;
    }
    else{
        printf("3 test has failed\n");
        printf("strcmp result: %d", strcmp(test_new_agency.agency_boss.second_name, copy_of_old_agency.agency_boss.second_name));
    }
    if (strcmp(test_new_agency.agency_boss.email, copy_of_old_agency.agency_boss.email) == 0){
        printf("4 test has passed!\n");
        counter++;
    }
    else{
        printf("4 test has failed\n");
        printf("strcmp result: %d", strcmp(test_new_agency.agency_boss.email, copy_of_old_agency.agency_boss.email));
    }
    if (strcmp(test_new_agency.agency_name, copy_of_old_agency.agency_name) == 0){
        printf("5 test has passed!\n");
        counter++;
    }
    else{
        printf("5 test has failed\n");
        printf("strcmp result: %d", strcmp(test_new_agency.agency_name, copy_of_old_agency.agency_name));
    }
    if (test_new_agency.agency_age == copy_of_old_agency.agency_age){
        printf("6 test has passed!\n");
        counter++;
    }
    else{
        printf("6 test has failed\n");
    }
    if (strcmp(test_new_agency.servicing_city, copy_of_old_agency.servicing_city) == 0){
        printf("7 test has passed!\n");
        counter++;
    }
    else{
        printf("7 test has failed\n");
        printf("strcmp result: %d", strcmp(test_new_agency.servicing_city, copy_of_old_agency.servicing_city));
    }

    if (counter == 7){
        printf("\nAll tests have passed!");
    }


    fclose(file);
}
