//
// Created by blank on 2/26/21.
//

#include "lib.h"

void generate_law_agencies(struct Law_agency *fill_law_agencies, int amount_of_law_agencies){

    srand(time(NULL));

    char possible_cities[AMOUNT_OF_CITIES][15] = {
            {"Kharkov"},
            {"Kiev"},
            {"London"}
    };

    char boss_first_name[SIZE][30] = {
            {"John"},
            {"Michael"},
            {"Bill"},
            {"William"},
            {"Harry"}
    };

    char boss_second_name[SIZE][30] = {
            {"Brown"},
            {"Miller"},
            {"Wilson"},
            {"Smith"},
            {"Jones"}
    };

    char boss_emails[SIZE][30] = {
            {"boss_boss@gmail.com"},
            {"good_boss@gmail.com"},
            {"wp@gmail.com"},
            {"wow@gmail.com"},
            {"cool@gmail.com"}
    };

    char agency_names[N][30] = {
            {"Law4U"},
            {"Angels"},
            {"Helpers"},
            {"Savers"},
            {"OnlyU"},
            {"POG"},
            {"OP"},
            {"WOW"},
            {"Best4u"},
            {"CoolOne"}
    };

    char law_services[SERVICES][30] = {
            {"Divorce consultation"},
            {"Defence in court"}
    };

    for (int i = 0; i < amount_of_law_agencies; i++){
        fill_law_agencies[i].agency_for_law.have_weekends = rand() % 2;
        fill_law_agencies[i].won_cases = rand() % VARIANT;
        fill_law_agencies[i].agency_for_law.agency_age = rand() % VARIANT;
        strcpy(fill_law_agencies[i].service_type, law_services[rand() % SERVICES]);
        strcpy(fill_law_agencies[i].agency_for_law.agency_name, agency_names[rand() % N]);
        strcpy(fill_law_agencies[i].agency_for_law.servicing_city, possible_cities[rand() % AMOUNT_OF_CITIES]);
        strcpy(fill_law_agencies[i].agency_for_law.agency_boss.first_name, boss_first_name[rand() % SIZE]);
        strcpy(fill_law_agencies[i].agency_for_law.agency_boss.second_name, boss_second_name[rand() % SIZE]);
        strcpy(fill_law_agencies[i].agency_for_law.agency_boss.email, boss_emails[rand() % SIZE]);
    }

}

void generate_marriage_agencies(struct Marriage_agency *fill_marriage_agencies, int amount_of_mar_agencies){
    srand(time(NULL));

    char possible_cities[AMOUNT_OF_CITIES][15] = {
            {"Kharkov"},
            {"Kiev"},
            {"London"}
    };

    char boss_first_name[SIZE][30] = {
            {"John"},
            {"Michael"},
            {"Bill"},
            {"William"},
            {"Harry"}
    };

    char boss_second_name[SIZE][30] = {
            {"Brown"},
            {"Miller"},
            {"Wilson"},
            {"Smith"},
            {"Jones"}
    };

    char boss_emails[SIZE][30] = {
            {"boss_boss@gmail.com"},
            {"good_boss@gmail.com"},
            {"wp@gmail.com"},
            {"wow@gmail.com"},
            {"cool@gmail.com"}
    };

    char agency_names[N][30] = {
            {"Law4U"},
            {"Angels"},
            {"Helpers"},
            {"Savers"},
            {"OnlyU"},
            {"POG"},
            {"OP"},
            {"WOW"},
            {"Best4u"},
            {"CoolOne"}
    };

    char marriage_services[SERVICES][30] = {
            {"Main help"},
            {"Meeting"}
    };

    char cooperation_countries[COOPERATION][30] = {
            {"Greece"},
            {"China"},
            {"USA"}
    };

    for (int i = 0; i < amount_of_mar_agencies; i++){
        strcpy(fill_marriage_agencies[i].servicing_method, marriage_services[rand() % SERVICES]);
        strcpy(fill_marriage_agencies[i].cooperation_country, cooperation_countries[rand() % COOPERATION]);
        fill_marriage_agencies[i].agency_for_marriages.have_weekends = rand() % 2;
        fill_marriage_agencies[i].agency_for_marriages.agency_age = rand() % VARIANT;
        strcpy(fill_marriage_agencies[i].agency_for_marriages.agency_name, agency_names[rand() % N]);
        strcpy(fill_marriage_agencies[i].agency_for_marriages.servicing_city, possible_cities[rand() % AMOUNT_OF_CITIES]);
        strcpy(fill_marriage_agencies[i].agency_for_marriages.agency_boss.email, boss_emails[rand() % SIZE]);
        strcpy(fill_marriage_agencies[i].agency_for_marriages.agency_boss.first_name, boss_first_name[rand() % SIZE]);
        strcpy(fill_marriage_agencies[i].agency_for_marriages.agency_boss.second_name, boss_second_name[rand() % SIZE]);
    }

}

void number_checker(int number){
    if (number < 0){
        printf("\nYour input number is less than 0, program will exit!");
        exit(1);
    }
}

void kharkov_agencies(struct Law_agency* l_agencies, struct Marriage_agency* m_agencies, int l_amount, int m_amount) {

    struct Law_agency *sorted_l = malloc(sizeof(struct Law_agency) * l_amount);
    memcpy(sorted_l, l_agencies, sizeof(struct Law_agency) * l_amount);

    struct Marriage_agency *sorted_m = malloc(sizeof(struct Marriage_agency) * m_amount);
    memcpy(sorted_m, m_agencies, sizeof(struct Marriage_agency) * m_amount);

    struct Law_agency temp_l;
    struct Marriage_agency temp_m;

    int k = 0, l = 0;

    for (int i = 0; i < m_amount; i++) {
        if (strcmp(sorted_m[i].agency_for_marriages.servicing_city, "Kharkov") == 0){
            temp_m = sorted_m[k];
            sorted_m[k] = sorted_m[i];
            sorted_m[i] = temp_m;
            k++;
        }
    }
    for (int i = 1; i < k - 1; i++){
        for (int j = 0; j < k - i; j++){
            if (sorted_m[j].agency_for_marriages.agency_age < sorted_m[j+1].agency_for_marriages.agency_age && strcmp(sorted_m[i].agency_for_marriages.servicing_city, "Kharkov") == 0){
                temp_m = sorted_m[j];
                sorted_m[j] = sorted_m[j+1];
                sorted_m[j+1] = temp_m;
            }
        }
    }


    for (int i = 0; i < l_amount; i++) {
        if (strcmp(sorted_l[i].agency_for_law.servicing_city, "Kharkov") == 0){
            temp_l = sorted_l[l];
            sorted_l[l] = sorted_l[i];
            sorted_l[i] = temp_l;
            l++;
        }
    }
    for (int i = 1; i < l - 1; i++){
        for (int j = 0; j < l - i; j++){
            if (sorted_l[j].agency_for_law.agency_age < sorted_l[j+1].agency_for_law.agency_age && strcmp(sorted_l[i].agency_for_law.servicing_city, "Kharkov") == 0){
                temp_l = sorted_l[j];
                sorted_l[j] = sorted_l[j+1];
                sorted_l[j+1] = temp_l;
            }
        }
    }

    printf("\nMarriage agencies:\n");
    mar_agency_reader(sorted_m, m_amount);

    printf("\nLaw agencies:\n");
    law_agency_reader(sorted_l, l_amount);

    free(sorted_m);
    free(sorted_l);
}

void defence_in_court_law_agencies(struct Law_agency *agencies, int l_amount){

    struct Law_agency *sorted = malloc(sizeof(struct Law_agency) * l_amount);
    memcpy(sorted, agencies, sizeof(struct Law_agency) * l_amount);

    struct Law_agency temp;

    for (int i = 1; i < l_amount; i++){
        for (int j = 0; j < l_amount - i; j++){
            if (sorted[j].won_cases > sorted[j+1].won_cases){
                temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }

    law_agency_reader(sorted, l_amount);
    free(sorted);
}

void defence_in_court_law_agencies2(struct Law_agency *agencies, int l_amount){

    struct Law_agency temp;

    for (int i = 1; i < l_amount; i++){
        for (int j = 0; j < l_amount - i; j++){
            if (agencies[j].won_cases > agencies[j+1].won_cases){
                temp = agencies[j];
                agencies[j] = agencies[j+1];
                agencies[j+1] = temp;
            }
        }
    }

    law_agency_reader(agencies, l_amount);

}

void no_weekends_mar_agencies(struct Marriage_agency *agencies, int m_amount){

    struct Marriage_agency *sorted = malloc(sizeof(struct Marriage_agency) * m_amount);
    memcpy(sorted, agencies, sizeof(struct Marriage_agency) * m_amount);

    struct Marriage_agency temp;

    for (int i = 1; i < m_amount; i++){
        for (int j = 0; j < m_amount - i; j++){
            if (sorted[j].agency_for_marriages.have_weekends > sorted[j+1].agency_for_marriages.have_weekends){
                temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }

    mar_agency_reader(sorted, m_amount);
    free(sorted);
}

void law_agency_reader(struct Law_agency *agency, int size){

    for (int i = 0; i < size; i++){
        printf("%d) boss first name is: %s \n", i + 1, agency[i].agency_for_law.agency_boss.first_name);
        printf("%d) boss second name is: %s \n", i + 1, agency[i].agency_for_law.agency_boss.second_name);
        printf("%d) boss email name is: %s \n", i + 1, agency[i].agency_for_law.agency_boss.email);
        printf("%d) agency name is: %s \n", i + 1, agency[i].agency_for_law.agency_name);
        printf("%d) agency age is: %d \n", i + 1, agency[i].agency_for_law.agency_age);
        printf("%d) agency servicing city is: %s \n", i + 1, agency[i].agency_for_law.servicing_city);
        printf("%d) have weekends parameter is: %u \n", i + 1, agency[i].agency_for_law.have_weekends);
        printf("%d) won cases parameter is: %u \n", i + 1, agency[i].won_cases);
        printf("%d) have weekends parameter is: %s \n", i + 1, agency[i].service_type);
        printf("\n");
    }

}

void mar_agency_reader(struct Marriage_agency *agency, int size){

    for (int i = 0; i < size; i++) {
        printf("%d) boss first name is: %s \n", i + 1, agency[i].agency_for_marriages.agency_boss.first_name);
        printf("%d) boss second name is: %s \n", i + 1, agency[i].agency_for_marriages.agency_boss.second_name);
        printf("%d) boss email name is: %s \n", i + 1, agency[i].agency_for_marriages.agency_boss.email);
        printf("%d) agency name is: %s \n", i + 1, agency[i].agency_for_marriages.agency_name);
        printf("%d) agency age is: %d \n", i + 1, agency[i].agency_for_marriages.agency_age);
        printf("%d) agency servicing city is: %s \n", i + 1, agency[i].agency_for_marriages.servicing_city);
        printf("%d) have weekends parameter is: %u \n", i + 1, agency[i].agency_for_marriages.have_weekends);
        printf("%d) servicing method parameter is: %s \n", i + 1, agency[i].servicing_method);
        printf("%d) cooperation country parameter is: %s \n", i + 1, agency[i].cooperation_country);
        printf("\n");
    }
}

void menu(struct Law_agency* l_agencies, struct Marriage_agency* m_agencies, int l_amount, int m_amount){

    int user_choice;
    printf("Enter the number which you want to do next:\n");
    printf("1 - for finding all agencies in Kharkov with experience 3 years at least. \n");
    printf("2 - for finding an agency with \"Defence in court\" with the highest amount of won cases.\n");
    printf("3 - for finding all marriage agencies which work without weekends.\n");
    printf("4 - for a unit test.\n");
    printf("5 - exiting.\n\n");
    printf("Input number: ");
    scanf("%d", &user_choice);

    if (user_choice > 5 || user_choice < 0){
        printf("\nYour input number doesn't fit, program will exit!");
        exit(1);
    }

    if (user_choice == 1){
        printf("\nAgencies in Kharkov with experience 3 years at least: \n");
        kharkov_agencies(l_agencies, m_agencies, l_amount, m_amount);
    }
    else if (user_choice == 2){
        printf("\nDefence in court with highest amount of won cases: \n");
        defence_in_court_law_agencies(l_agencies, l_amount);
    }
    else if (user_choice == 3){
        printf("\nAll marriage agencies which work without weekends: \n");
        no_weekends_mar_agencies(m_agencies, m_amount);
    }
    else if (user_choice == 4){
        test_defence_in_court_law_agencies2();
        return 0;
    }
    else if (user_choice == 5){
        return 0;
    }

    menu(l_agencies, m_agencies, l_amount, m_amount);

}

