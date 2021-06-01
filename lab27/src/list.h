#pragma once
#include "lib.h"

class List{
private:
    int cap;
    int num_of_elem;
    int index;

public:
    Agency ** pAgency;

    List(){
        this->cap = 6;
        this->index = 0;
        this->num_of_elem = 0;
        this->pAgency = new Agency*[cap];
    }
    ~List(){
        for (int i = 0; i < num_of_elem; i++){
            delete [] this->pAgency[i];
        }
        delete this->pAgency;
    }

    void add(Agency *ag);
    int get_cap();
    Agency &get_ag(int index) const;
    void print();
    void kharkov_agencies();
    int most_wins_law();
    void defence_in_court();
    void no_weekends_mar_agencies();

    void test();
};