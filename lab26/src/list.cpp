#include "list.h"

void List::initialize(int from) {
    for (int i = from; i < this->cap; i++)
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

    if (this->num_of_elem >= this->cap) this->expand();

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

//void List::read_from_file(string file_name, List &list){
//
//    int ag_age;
//    char f_name[50], s_name[50], email[50];
//    char ag_name[50], ag_city[50];
//
//    ifstream infile;
//    infile.open (file_name);
//
//    if(infile.is_open()){
//        infile >> f_name;
//        infile >> s_name;
//        infile >> email;
//        infile >> ag_city;
//        infile >> ag_name;
//        infile >> ag_age;
//    }
//
//    list.add_ag(Agency(f_name, s_name, email, ag_name, ag_city, ag_age));
//
//    infile.close();
//}
//
//void List::write_to_file(string file_name){
//    ofstream MyWriteFile(file_name);
//
//    for (int i = 0; i < num_of_elem; i++){
//        MyWriteFile << get_ag(i).get_info();
//        MyWriteFile << endl;
//    }
//
//
//    MyWriteFile.close();
//}

void List_law::initialize(int from) {
    for (int i = from; i < this->cap; i++)
    {
        this->pAgency[i] = nullptr;
    }
}

void List_law::expand() {

    this->cap *= 2;

    Law_agency **temp_arr = new Law_agency*[this->cap];

    for (int i = 0; i < this->num_of_elem; i++)
    {
        temp_arr[i] = new Law_agency(*this->pAgency[i]);
    }

    for (int i = 0; i < this->num_of_elem; i++)
    {
        delete this->pAgency[i];
    }
    delete [] this->pAgency;

    this->pAgency = temp_arr;

    this->initialize(this->num_of_elem);
}

void List_law::add_ag(const Law_agency &ag) {

    if (this->num_of_elem >= this->cap) this->expand();

    this->pAgency[this->num_of_elem++] = new Law_agency(ag);
}

Law_agency& List_law::get_ag(int index) const {

    if (index < 0 || index >= this->num_of_elem){
        cout << "Out of range!";
        exit(1);
    }

    return *this->pAgency[index];
}

void List_law::defence_in_court() const{
    for (int i = 0; i < num_of_elem; i++){
        if(pAgency[i]->get_service() == "defence"){
            cout << pAgency[i]->print_l_ag();
        }
    }
}

void List_law::kharkov_agencies() const {
    for (int i = 0; i < num_of_elem; i++){
        if(pAgency[i]->get_city() == "kharkov"){
            cout << pAgency[i]->print_l_ag();
        }
    }
}

int List_law::most_won_cases() const {
    int index = 0;

    for (int i = 1; i < num_of_elem; i++){
        if (pAgency[i]->get_won_cases() > pAgency[0]->get_won_cases()){
            index = i;
        }
    }

    return index;
}

void List_mar::initialize(int from) {
    for (int i = from; i < this->cap; i++)
    {
        this->pAgency[i] = nullptr;
    }
}

void List_mar::expand() {

    this->cap *= 2;

    Mar_agency **temp_arr = new Mar_agency*[this->cap];

    for (int i = 0; i < this->num_of_elem; i++)
    {
        temp_arr[i] = new Mar_agency(*this->pAgency[i]);
    }

    for (int i = 0; i < this->num_of_elem; i++)
    {
        delete this->pAgency[i];
    }
    delete [] this->pAgency;

    this->pAgency = temp_arr;

    this->initialize(this->num_of_elem);
}

void List_mar::add_ag(const Mar_agency &ag) {

    if (this->num_of_elem >= this->cap) this->expand();

    this->pAgency[this->num_of_elem++] = new Mar_agency(ag);
}

Mar_agency& List_mar::get_ag(int index) const {

    if (index < 0 || index >= this->num_of_elem){
        cout << "Out of range!";
        exit(1);
    }

    return *this->pAgency[index];
}

void List_mar::no_weekends_mar_agencies()  const{
    for (int i = 0; i < num_of_elem; i++){
        if(pAgency[i]->get_weekends() == true){
            cout << pAgency[i]->print_m_ag();
        }
    }
}

void List_mar::kharkov_agencies() const {
    for (int i = 0; i < num_of_elem; i++){
        if(pAgency[i]->get_city() == "kharkov"){
            cout << pAgency[i]->print_m_ag();
        }
    }
}