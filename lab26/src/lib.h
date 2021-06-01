#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <regex.h>

using namespace std;

struct boss{
    char first_name[50];
    char second_name[50];
    char email[50];
};

class Agency
{
protected:
    char agency_name[50];
    char servicing_city[50];
    int agency_age;
    struct boss agency_boss;
public:
    Agency()
    {
    };
    Agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age)
    {
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
    }
    ~Agency()
    {
    }

    string get_info() const;
    int get_age() const{
        return agency_age;
    }
};

class Law_agency : public Agency
{
    char service_type[50];
    int won_cases;

public:
    Law_agency()
    {
    };
    Law_agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age,char s_type[50], int wins) : Agency(boss_f_name, boss_s_name, email, name, city, age)
    {
//        this->agency_age = age;
//        strcpy( this->agency_boss.first_name, boss_f_name );
//        strcpy( this->agency_boss.second_name, boss_s_name );
//        strcpy( this->agency_boss.email, email );
//        strcpy( this->agency_name, name );
//        strcpy( this->servicing_city, city );
        strcpy( this->service_type, s_type);
        this->won_cases = wins;
    }
    ~Law_agency()
    {
    }

    string get_service(){
        return service_type;
    }
    string get_city(){
        return servicing_city;
    }
    string print_l_ag();
    int get_won_cases(){
        return won_cases;
    }
};

class Mar_agency : public Agency
{
    char servicing_method[50];
    char cooperation_country[50];
    bool weekends;

public:
    Mar_agency()
    {
    };
    Mar_agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age, char serv_method[50], char coop[50], bool week) : Agency(boss_f_name, boss_s_name, email, name, city, age)
    {
//        this->agency_age = age;
//        strcpy( this->agency_boss.first_name, boss_f_name );
//        strcpy( this->agency_boss.second_name, boss_s_name );
//        strcpy( this->agency_boss.email, email );
//        strcpy( this->agency_name, name );
//        strcpy( this->servicing_city, city );
        strcpy( this->servicing_method, serv_method);
        strcpy( this->cooperation_country, coop);
        weekends = week;
    }
    ~Mar_agency()
    {
    }

    bool get_weekends(){
        return weekends;
    }
    string get_city(){
        return servicing_city;
    }
    string print_m_ag();
};
