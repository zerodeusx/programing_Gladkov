#pragma once
#include "lib.h"

class List
{
private:
    vector<Agency*>pAgency;

public:

    List()
    {

    };
    ~List()
    {

    };

    void clean();
    void print();
    void add(Agency *ag);
    Agency &get_ag(int index) const;
    void remove(int index);
    void change_values(int index);

    vector<Agency*> get_vector(){
        return pAgency;
    }

};