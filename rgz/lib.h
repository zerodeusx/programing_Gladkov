#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

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

    void set_boss(char boss_f_name[50], char boss_s_name[50], char email[50]){
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
    }
    void set_name(char name[50]){
        strcpy( this->agency_name, name );
    }
    void set_city(char city[50]){
        strcpy( this->servicing_city, city );
    }
    void set_age(int age){
        this->agency_age = age;
    }
    int get_age(){
        return this->agency_age;
    }
    string get_f_name(){
        return this->agency_boss.first_name;
    }
    string get_s_name(){
        return this->agency_boss.second_name;
    }
    string get_email(){
        return this->agency_boss.email;
    }
    string get_ag_name(){
        return this->agency_name;
    }
    string get_city(){
        return this->servicing_city;
    }

    virtual string name_of_class() = 0;

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

    string get_info() const;
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
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
        strcpy( this->service_type, s_type);
        this->won_cases = wins;
    }
    Law_agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age)
    {
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
        won_cases = -1;
    }
    ~Law_agency()
    {
    }

    bool operator == (const Law_agency &ag)
    {
        return (
                strcmp(this->agency_boss.first_name, ag.agency_boss.first_name) == 0 &&
                strcmp(this->agency_boss.second_name, ag.agency_boss.second_name) == 0&&
                strcmp(this->agency_boss.email, ag.agency_boss.email) == 0 &&
                strcmp(this->agency_name, ag.agency_name) == 0 &&
                strcmp(this->servicing_city, ag.servicing_city) == 0 &&
                this->agency_age == ag.agency_age) &&
                strcmp(this->service_type, ag.service_type) == 0 &&
                this->won_cases == ag.won_cases;
    }

    friend ostream& operator<< (std::ostream &out, const Law_agency &ag);
    friend istream& operator>> (std::istream &in, Law_agency &ag);

    string print_l_ag();

    string name_of_class() override{
        cout << "Law";
    }

    int get_wins(){
        return this->won_cases;
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
        this->agency_age = age;
        strcpy( this->agency_boss.first_name, boss_f_name );
        strcpy( this->agency_boss.second_name, boss_s_name );
        strcpy( this->agency_boss.email, email );
        strcpy( this->agency_name, name );
        strcpy( this->servicing_city, city );
        strcpy( this->servicing_method, serv_method);
        strcpy( this->cooperation_country, coop);
        weekends = week;
    }
    ~Mar_agency()
    {
    }
    bool operator == (const Mar_agency &ag)
    {
        return (
                strcmp(this->agency_boss.first_name, ag.agency_boss.first_name) == 0 &&
                strcmp(this->agency_boss.second_name, ag.agency_boss.second_name) == 0&&
                strcmp(this->agency_boss.email, ag.agency_boss.email) == 0 &&
                strcmp(this->agency_name, ag.agency_name) == 0 &&
                strcmp(this->servicing_city, ag.servicing_city) == 0 &&
                this->agency_age == ag.agency_age);
                strcmp(this->servicing_method, ag.servicing_method) == 0 &&
                strcmp(this->cooperation_country, ag.cooperation_country) == 0 &&
                weekends == ag.weekends;
    }

    friend ostream& operator<< (std::ostream &out, const Mar_agency &ag);
    friend istream& operator>> (std::istream &in, Mar_agency &ag);

    string print_m_ag();

    string name_of_class() override{
        cout << "Mar";
    }

    bool get_weekends(){
        return weekends;
    }
};
