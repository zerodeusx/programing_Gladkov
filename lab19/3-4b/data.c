#include "data.h"

void agency_filler(struct Agency *to_fill){

    printf("\nEnter boss first name:");
    scanf("%s", to_fill->agency_boss.first_name);
    printf("\nEnter boss second name:");
    scanf("%s", to_fill->agency_boss.second_name);
    printf("\nEnter boss email:");
    scanf("%s", to_fill->agency_boss.email);
    printf("\nEnter agency name:");
    scanf("%s", to_fill->agency_name);
    printf("\nEnter agency servicing city:");
    scanf("%s", to_fill->servicing_city);
    printf("\nEnter agency age:");
    scanf("%zd", &to_fill->agency_age);
    printf("\nEnter the have weekends parameter (0 or 1):");
    scanf("%d", &to_fill->have_weekends);

    printf("\n>A new link has been created and filled!<\n\n");
}

void link_creator(struct Agency *to_add){
    to_add->next = malloc(sizeof(struct Agency));
}