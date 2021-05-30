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
        this->cap = 2;
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

    void test_oldest();
    void test_remove();
    void test_add();

};