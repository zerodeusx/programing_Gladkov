#pragma once
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct boss{
    char first_name[50];
    char second_name[50];
    char email[50];
};

class Agency{

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

    int get_age(){
        return this->agency_age;
    }
    virtual string name_of_class() = 0;
    virtual void myfun() final
    {
        cout << "\nfinal method!\n";
    }
};

class Law_agency : public Agency
{
    char service_type[50];
    int won_cases;

public:

    int get_age(){
        return this->agency_age;
    }
    virtual string name_of_class() override final{
        return "Law";
    }

    Law_agency()
    {
    };
    Law_agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age,char s_type[50], int wins)
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
    ~Law_agency()
    {
    }

    string get_city(){
        return servicing_city;
    }

    int get_won_cases(){
        return won_cases;
    }

    string get_service(){
        return service_type;
    }

    virtual int get_sth(){
        return won_cases;
    }

    string print_l_ag();

};

class Mar_agency : public Agency
{
    char servicing_method[50];
    char cooperation_country[50];
    bool weekends;

public:

    virtual string name_of_class() override final{
        return "Mar";
    }

    Mar_agency()
    {
    };
    Mar_agency(char boss_f_name[50], char boss_s_name[50], char email[50],  char name[50], char city[50], int age, char serv_method[50], char coop[50], bool week)
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

    bool get_weekends(){
        return weekends;
    }

    string get_city(){
        return servicing_city;
    }

    virtual int get_sth(){
        return agency_age;
    }


    int get_age(){
        return this->agency_age;
    }

    string print_m_ag();

};
