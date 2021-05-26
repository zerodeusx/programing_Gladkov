#include "lib.h"

int main() {

    int amount_of_law_ag, amount_of_mar_ag;

    printf("Please enter how many law agencies you want to generate: ");
    scanf("%d", &amount_of_law_ag);
    number_checker(amount_of_law_ag);

    printf("\n");

    printf("\nPlease enter how many marriage agencies you want to generate: ");
    scanf("%d", &amount_of_mar_ag);
    number_checker(amount_of_mar_ag);

    struct Law_agency *law_agencies = malloc(sizeof(struct Law_agency) * amount_of_law_ag);
    struct Marriage_agency *marriage_agencies = malloc(sizeof(struct Marriage_agency) * amount_of_mar_ag);

    generate_law_agencies(law_agencies, amount_of_law_ag);
    generate_marriage_agencies(marriage_agencies, amount_of_mar_ag);
    printf("\nGeneration was done!");

    printf("\n\n-----------------------|\nYour law agencies are: |\n-----------------------|\n\n");
    law_agency_reader(law_agencies, amount_of_law_ag);

    printf("\n\n----------------------------|\nYour marriage agencies are: |\n----------------------------|\n\n");
    mar_agency_reader(marriage_agencies, amount_of_mar_ag);

    menu(law_agencies, marriage_agencies, amount_of_law_ag, amount_of_mar_ag);

    free(marriage_agencies);
    free(law_agencies);

    return 0;
}
