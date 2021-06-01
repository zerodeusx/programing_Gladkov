#pragma once
#include "lib.h"

class List
{
private:
    int cap;
    int num_of_elem;
    Agency **pAgency;

    void initialize(int from);
    void expand();

public:

    List()
    {
        this->cap = 4;
        this->num_of_elem = 0;
        this->pAgency = new Agency*[cap];
    };
    ~List()
    {
        for (int i = 0; i < num_of_elem; i++){
            delete this->pAgency[i];
        }
        delete this->pAgency;
    };
    void add_ag(const Agency &ag);
    Agency &get_ag(int index) const;
    const int& get_num() const
    {
        return this->num_of_elem;
    }
    void remove_last_ag();

    int get_oldest_ag() const;

//    void read_from_file(string file_name, List &list);
//    void write_to_file(string file_name);

    void test_oldest();
    void test_remove();
    void test_add();
};

class List_law
{
    int cap;
    int num_of_elem;
    Law_agency **pAgency;

    void initialize(int from);
    void expand();

public:

    List_law()
    {
        this->cap = 4;
        this->num_of_elem = 0;
        this->pAgency = new Law_agency*[cap];
    };
    ~List_law()
    {
        for (int i = 0; i < num_of_elem; i++){
            delete this->pAgency[i];
        }
        delete this->pAgency;
    };

    void add_ag(const Law_agency &ag);
    Law_agency &get_ag(int index) const;
    const int& get_num() const
    {
        return this->num_of_elem;
    }

    void defence_in_court() const;
    void kharkov_agencies() const;
    int most_won_cases() const;
    void test();
};

class List_mar
{
    int cap;
    int num_of_elem;
    Mar_agency **pAgency;

    void initialize(int from);
    void expand();

public:

    List_mar()
    {
        this->cap = 4;
        this->num_of_elem = 0;
        this->pAgency = new Mar_agency*[cap];
    };
    ~List_mar()
    {
        for (int i = 0; i < num_of_elem; i++){
            delete this->pAgency[i];
        }
        delete this->pAgency;
    };

    void add_ag(const Mar_agency &ag);
    Mar_agency &get_ag(int index) const;
    const int& get_num() const
    {
        return this->num_of_elem;
    }

    void no_weekends_mar_agencies() const;
    void kharkov_agencies() const;
    void test();
};