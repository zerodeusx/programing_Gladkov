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
private:
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

    Agency& operator = (const Agency &ag)
    {
        strcpy(this->agency_boss.first_name, ag.agency_boss.first_name);
        strcpy(this->agency_boss.second_name, ag.agency_boss.second_name);
        strcpy(this->agency_boss.email, ag.agency_boss.email);
        strcpy(this->agency_name, ag.agency_name);
        strcpy(this->servicing_city, ag.servicing_city);
        this->agency_age=ag.agency_age;

        return *this;
    }

    bool operator == (const Agency &ag)
    {
        return (
                strcmp(this->agency_boss.first_name, ag.agency_boss.first_name) == 0 &&
                strcmp(this->agency_boss.second_name, ag.agency_boss.second_name) == 0&&
                strcmp(this->agency_boss.email, ag.agency_boss.email) == 0 &&
                strcmp(this->agency_name, ag.agency_name) == 0 &&
                strcmp(this->servicing_city, ag.servicing_city) == 0 &&
                this->agency_age == ag.agency_age);
    }

    friend ostream& operator<< (std::ostream &out, const Agency &ag);
    friend istream& operator>> (std::istream &in, Agency &ag);

};
