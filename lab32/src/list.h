#pragma once
#include "lib.h"

class Functor{
public:
    bool operator()(int a, int b){
        return (a < b);
    }
};

template <typename T>
class Smart_ptr{
public:
    Smart_ptr(T *ptr){
        this->ptr = ptr;
    }
    ~Smart_ptr(){
        delete ptr;
    }

    T& operator*(){
        return *ptr;
    }

private:
    T * ptr;
};

class List{
private:
    vector<Agency*>pAgency;

public:
    List(){

    }
    ~List(){

    }
    void add(Agency *ag);
    Law_agency &get_ag(int index) const;
    void print();
    void kharkov_agencies();
    int most_wins_law();
    void defence_in_court();
    void no_weekends_mar_agencies();

    void merge(List my_list);
    void sort();
    void remove_last();
    void change_vals();

    vector<Agency*> get_vector(){
        return pAgency;
    }


    void test();
};
