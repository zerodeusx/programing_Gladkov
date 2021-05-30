#include "list.h"

void List::initialize(int from) {
    for (int i = 0; i < this->cap; i++)
    {
        this->pAgency[i] = nullptr;
    }
}

void List::expand() {

    this->cap *= 2;

    Agency **temp_arr = new Agency*[this->cap];

    for (int i = 0; i < this->num_of_elem; i++)
    {
        temp_arr[i] = new Agency(*this->pAgency[i]);
    }

    for (int i = 0; i < this->num_of_elem; i++)
    {
        delete this->pAgency[i];
    }
    delete [] this->pAgency;

    this->pAgency = temp_arr;

    this->initialize(this->num_of_elem);
}

void List::add_ag(const Agency &ag) {

    if (this->num_of_elem > this->cap) this->expand();

    this->pAgency[this->num_of_elem++] = new Agency(ag);
}

Agency& List::get_ag(int index) const {

    if (index < 0 || index >= this->num_of_elem){
        cout << "Out of range!";
        exit(1);
    }

    return *this->pAgency[index];
}

void List::remove_last_ag(){
    delete this->pAgency[this->num_of_elem - 1];
    num_of_elem--;
}

int List::get_oldest_ag() const {
    int oldest_index;
    int temp = pAgency[0]->get_age();

    for (int i = 1; i < num_of_elem; i++){
        if (pAgency[i]->get_age() > temp){
            temp = pAgency[i]->get_age();
            oldest_index = i;
        }
    }

    return oldest_index;
}