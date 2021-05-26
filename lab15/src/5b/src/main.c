#include "lib.h"

int main() {

    int amount_of_structs = struct_amount();

    printf("\n");

    struct Agency *ag_to_write = malloc(sizeof(struct Agency) * amount_of_structs);
    agency_writer(ag_to_write, amount_of_structs);

    printf("\n");


    printf("\nYour agencies are:\n");
    agency_reader(ag_to_write, amount_of_structs);

    int choice;

    printf("Enter 1 if you want to write your agency to a binary and text file or 2 if you don't: ");
    scanf("%d", &choice);

    char path1[50], path2[50];

    printf("Enter the path for the text files: ");
    scanf("%s", path1);

    printf("Enter the path for the binary files: ");
    scanf("%s", path2);

    if (choice == 1){
        printf("\nText version:\n");
        write_struct_to_txt(ag_to_write, amount_of_structs, path1);
        read_struct_from_txt(ag_to_write, amount_of_structs, path1);

        printf("\n\nBinary version:\n");
        write_struct_to_bin(ag_to_write, amount_of_structs, path2);
        read_struct_from_bin(ag_to_write, amount_of_structs, path2);

        index_reader(amount_of_structs);
    }

    printf("\nTest time!\n");
    test_write_struct_to_txt();


    return 0;
}
