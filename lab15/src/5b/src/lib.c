#include "lib.h"

void agency_writer(struct Agency* agency, int size){

    for (int i = 0; i < size; i++){
        printf("Please enter boss first name: ");
        scanf("%s", agency[i].agency_boss.first_name);

        printf("Please enter boss second name: ");
        scanf("%s", agency[i].agency_boss.second_name);

        printf("Please enter boss email: ");
        scanf("%s", agency[i].agency_boss.email);

        printf("Please enter agency name: ");
        scanf("%s", agency[i].agency_name);

        printf("Please enter agency age: ");
        scanf("%d", &agency[i].agency_age);

        printf("Please enter agency servicing city: ");
        scanf("%s", agency[i].servicing_city);

        printf("Please enter 0 if agency has weekends and 1 if doesn't: ");
        scanf("%d", &agency[i].have_weekends);

        printf("\n");
    }

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

void write_struct_to_txt(struct Agency *agency, int size, char path[]){


    FILE* file;
    file = fopen(path, "w");

    for (int i = 0; i < size; i++){
        fprintf(file,"%d\n%s\n%s\n%s\n%s\n%d\n%s", agency[i].have_weekends, agency[i].agency_boss.first_name, agency[i].agency_boss.second_name, agency[i].agency_boss.email, agency[i].agency_name, agency[i].agency_age, agency[i].servicing_city);
        fprintf(file, "\n\n");
    }

    fclose(file);

}

void write_struct_to_bin(struct Agency *agency, int size, char path[]){

    FILE* file = fopen(path, "wb");

    fwrite(agency, sizeof(struct Agency) * size, 1, file);

    fclose(file);
}

void read_struct_from_txt(struct Agency *agency, int size, char path[]){

    int buffer = 50;

    struct Agency temp[size];

    FILE* file;
    file = fopen(path, "r");

    for (int i = 0; i < size; i++) {
        fscanf(file, "%d\n", &temp[i].have_weekends);
        fgets(temp[i].agency_boss.first_name, buffer, file);
        fgets(temp[i].agency_boss.second_name, buffer, file);
        fgets(temp[i].agency_boss.email, buffer, file);
        fgets(temp[i].agency_name, buffer, file);
        fscanf(file, "%d\n", &temp[i].agency_age);
        fgets(temp[i].servicing_city, buffer, file);
    }

    fclose(file);

    for (int i = 0; i < size; i++) {
        printf("%d) boss first name is: %s", i + 1, temp[i].agency_boss.first_name);
        printf("%d) boss second name is: %s", i + 1, temp[i].agency_boss.second_name);
        printf("%d) boss email name is: %s", i + 1, temp[i].agency_boss.email);
        printf("%d) agency name is: %s", i + 1, temp[i].agency_name);
        printf("%d) agency age is: %d \n", i + 1, temp[i].agency_age);
        printf("%d) agency servicing city is: %s", i + 1, temp[i].servicing_city);
        printf("%d) have weekends parameter is: %u", i + 1, temp[i].have_weekends);
        printf("\n\n");
    }


}

void read_struct_from_bin(struct Agency *agency, int size, char path[]){

    FILE* file = fopen(path, "rb");

    struct Agency* temp = malloc(sizeof(struct Agency) * size);

    fread(temp, sizeof(struct Agency) * size, 1, file);

    agency_reader(temp, size);

    free(temp);
}

void index_reader(int size){

    char path[50];
    printf("Please enter where you want to write your structure from (binary): ");
    scanf("%s", path);

    FILE* file = fopen(path, "rb");

    struct Agency* temp = malloc(sizeof(struct Agency));

    int index;
    printf("\nEnter which structure you want to read (index): ");
    scanf("%d", &index);

    fseek(file, sizeof(struct Agency) * (index - 1) , SEEK_SET);

    fread(temp, sizeof(struct Agency), 1, file);

    printf("\nYour structure is:\n");

    agency_reader(temp, 1);

    free(temp);
}

int struct_amount(){

    int amount;

    printf("How many agencies do you want?: ");
    scanf("%d", &amount);

    return amount;
}
