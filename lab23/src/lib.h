#pragma once
#include <iostream>
#include <cstring>

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
//        cout << "Default";
    };

    Agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age)
    {
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
//        cout << "All params\n";
    }

    Agency(const Agency& to_copy) : agency_age(to_copy.agency_age), agency_boss(to_copy.agency_boss)
    {
        strcpy(servicing_city, to_copy.servicing_city);
        strcpy(agency_name, to_copy.agency_name);
//        printf("copy");
    }

    ~Agency()
    {
//        cout << "Default des\n";
    }

//    inline const string& get_boss_f_name() const { return this->agency_boss.first_name; }
//    inline const string& get_boss_s_name() const { return this->agency_boss.second_name; }
//    inline const string& get_boss_email() const { return this->agency_boss.email; }
//    inline const string& get_ag_namee() const { return this->agency_name; }
//    inline const int& get_age() const { return this->agency_age; }

    string get_info() const;
    int get_age() const{
        return agency_age;
    }
};