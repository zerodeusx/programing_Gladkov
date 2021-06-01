#pragma once
#include "lib.h"

class Functor1{
public:
    bool operator()(int a, int b){
        return (a < b);
    }
};
class Functor2{
public:
    bool operator()(int a, int b){
        return (a > b);
    }
};

class Controller{
private:
    vector<Agency*>pAgency;

public:
    Controller(){

    }
    ~Controller(){

    }
    void search();
    void add(Agency *ag);
    void print();
    void sort();
    void kharkov_aged();
    void mar_without_weekends();
    int law_with_most_wons();


    void read_from_file();
    void write_to_file();

    vector<Agency*> get_vector(){
        return pAgency;
    }

    void test();
};
