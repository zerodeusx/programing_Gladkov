#include "lib.h"
//#include "test/test.c"

int main() {

    printf("!!! Your file has to have !!!\n");
    printf("\n1 line - 0/1, 0 - if it has weekends, 1 - if it hasn't");
    printf("\n2 line - boss's first name");
    printf("\n3 line - boss's second name");
    printf("\n4 line - boss's email");
    printf("\n5 line - agency's name");
    printf("\n6 line - agency's age");
    printf("\n7 line - servicing city");

    int read_amount;
    printf("\n\nPlease enter the amount of agencies you have in your file: ");
    scanf("%d", &read_amount);
    printf("\n");

    char read_from_file[50];
    printf("Please enter the path you want to read your structure from: ");
    scanf("%s", read_from_file);

    struct Agency *our_agency = malloc(sizeof(struct Agency) * read_amount);
    structure_reader(read_from_file, read_amount, our_agency);

    char user_choice[5];
    printf("Do you want to print your structure (y/n): ");
    scanf("%s", user_choice);
    if (strcmp(user_choice, "y") == 0 || strcmp(user_choice, "Y") == 0){
        structure_printer(our_agency, read_amount);
    }

    char user_choice_w[5];
    printf("\nDo you want to write a new structure to a new file (y/n): ");
    scanf("%s", user_choice_w);

    char path_for_struct[50] = "/home/blank/programming/test/testing.txt";
    if (strcmp(user_choice_w, "y") == 0 || strcmp(user_choice_w, "Y") == 0){
        printf("Please enter a path where you want to write your new structure: ");
        scanf("%s", path_for_struct);
        structure_writer(path_for_struct);
    }

    printf("\nProgram has finished!");

    return 0;
}