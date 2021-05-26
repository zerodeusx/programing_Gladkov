//
// Created by blank on 2/28/21.
//

#include "lib.h"

void structure_reader(char* path, int amount, struct Agency *our_agency){

    FILE* file;
    file = fopen(path, "r");

    for (int i = 0; i < amount; i++) {
        fscanf(file, "%d\n", &our_agency[i].have_weekends);
        fgets(our_agency[i].agency_boss.first_name, SIZE, file);
        fgets(our_agency[i].agency_boss.second_name, SIZE, file);
        fgets(our_agency[i].agency_boss.email, SIZE, file);
        fgets(our_agency[i].agency_name, SIZE, file);
        fscanf(file, "%zd\n", &our_agency[i].agency_age);
        fgets(our_agency[i].servicing_city, SIZE, file);
    }


    fclose(file);

};

void structure_writer(char* path) {
    FILE* file;
    file = fopen(path, "w");

    struct Agency new_agency = {1, "John", "Wick", "boss@gmail.com", "whatislove", 10, "Kharkov"};

    fprintf(file, "%d\n%s\n%s\n%s\n%s\n%zu\n%s", new_agency.have_weekends, new_agency.agency_boss.first_name, new_agency.agency_boss.second_name, new_agency.agency_boss.email, new_agency.agency_name, new_agency.agency_age, new_agency.servicing_city);

    fclose(file);

    char test_choice[5];
    printf("\nDo you want to make a test for your new file?: ");
    scanf("%s", test_choice);

    if (strcmp(test_choice, "Y") == 0 || strcmp(test_choice, "y") == 0){
        testing_structure_writer(path, new_agency);
    }

};

void structure_printer(struct Agency *our_agency, int amount){

    printf("\nYour structure(s) is(are): \n");

    for (int i = 0; i < amount; i++) {
        printf("%d\n", our_agency[i].have_weekends);
        printf("%s", our_agency[i].agency_boss.first_name);
        printf("%s", our_agency[i].agency_boss.second_name);
        printf("%s", our_agency[i].agency_boss.email);
        printf("%s", our_agency[i].agency_name);
        printf("%zu\n", our_agency[i].agency_age);
        printf("%s", our_agency[i].servicing_city);
        printf("\n");
    }

}

