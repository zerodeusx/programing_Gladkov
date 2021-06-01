#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

using namespace std;

struct boss{
    char first_name[50];
    char second_name[50];
    char email[50];
};

class Agency // !class A
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
    Agency(string text){
        int ag_age;
        char everything[6][50];

        string word = "";
        int counter = 0;
        int index = 0;

        for (auto x : text){
            if (x == ' ')
            {
                if (counter == 6){
                    ag_age = stoi(word);
                }
                else{
                    strcpy(everything[index], word.c_str());
                    index++;
                }
                word = "";
                counter++;
            }
            else {
                word = word + x;
            }
        }


        this->agency_age = ag_age;
        strcpy( this->agency_boss.first_name, everything[0] );
        strcpy( this->agency_boss.second_name, everything[1] );
        strcpy( this->agency_boss.email, everything[2] );
        strcpy( this->agency_name, everything[3] );
        strcpy( this->servicing_city, everything[4] );

    }
    Agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age)
    {
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
    }
    Agency(const Agency& to_copy) : agency_age(to_copy.agency_age), agency_boss(to_copy.agency_boss)
    {
        strcpy(servicing_city, to_copy.servicing_city);
        strcpy(agency_name, to_copy.agency_name);
    }
    ~Agency()
    {
    }

    string get_info() const;
    int get_age() const{
        return agency_age;
    }

};