#include "lib.h"

void struct_appender(struct Agency* from, struct Agency* to, int old_size, int new_size){

    memcpy(to, from, sizeof(struct Agency) * old_size);

    for (int i = old_size; i < new_size; i++){
        printf("Please enter boss first name: ");
        scanf("%s", to[i].agency_boss.first_name);

        printf("Please enter boss second name: ");
        scanf("%s", to[i].agency_boss.second_name);

        printf("Please enter boss email: ");
        scanf("%s", to[i].agency_boss.email);

        printf("Please enter agency name: ");
        scanf("%s", to[i].agency_name);

        printf("Please enter agency age: ");
        scanf("%d", &to[i].agency_age);

        printf("Please enter agency servicing city: ");
        scanf("%s", to[i].servicing_city);

        printf("Please enter 0 if agency has weekends and 1 if doesn't: ");
        scanf("%d", &to[i].have_weekends);

        printf("\n");
    }

}

void struct_remover(struct Agency* from, struct Agency* to, int old_size, int new_size){

    memcpy(to, from, sizeof(struct Agency) * new_size);

}

void agency_reader(struct Agency *agency, int size){

    for (int i = 0; i < size; i++){
        printf("%d) boss first name is: %s \n", i + 1, agency[i].agency_boss.first_name);
        printf("%d) boss second name is: %s \n", i + 1, agency[i].agency_boss.second_name);
        printf("%d) boss email name is: %s \n", i + 1, agency[i].agency_boss.email);
        printf("%d) agency name is: %s \n", i + 1, agency[i].agency_name);
        printf("%d) agency age is: %d \n", i + 1, agency[i].agency_age);
        printf("%d) agency servicing city is: %s \n", i + 1, agency[i].servicing_city);
        printf("%d) have weekends parameter is: %u \n", i + 1, agency[i].have_weekends);
        printf("\n");
    }

}