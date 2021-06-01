#include "lib.h"

string Agency::get_info() const {

    string boss_f_name(this->agency_boss.first_name);
    string boss_s_name(this->agency_boss.second_name);
    string boss_email(this->agency_boss.first_name);
    string ag_name(this->agency_boss.first_name);
    string serv_city(this->servicing_city);


    return
            "Agency boss first name: " + boss_f_name + "\n" +
            "Agency boss second name: " + boss_s_name + "\n" +
            "Agency boss email: " + boss_email + "\n" +
            "Agency name: " + ag_name + "\n" +
            "Agency city: " + serv_city + "\n" +
            "Agency age: " + to_string(this->agency_age) + "\n\n";
}

ostream& operator<< (std::ostream &out, const Agency &ag)
{
    out << "\nAgency boss first name: " << ag.agency_boss.first_name <<
        "\nAgency boss second name: " << ag.agency_boss.second_name <<
        "\nAgency boss email: " << ag.agency_boss.email <<
        "\nAgency name: " << ag.agency_name <<
        "\nAgency city: " << ag.servicing_city <<
        "\nAgency age: " << ag.agency_age;

    ofstream MyWriteFile("/home/blank/xd.txt");

    MyWriteFile << ag.agency_boss.first_name << endl;
    MyWriteFile << ag.agency_boss.second_name << endl;
    MyWriteFile << ag.agency_boss.email << endl;
    MyWriteFile << ag.agency_name << endl;
    MyWriteFile << ag.servicing_city << endl;
    MyWriteFile << ag.agency_age << endl;

    MyWriteFile.close();

    return out;
}

istream& operator>> (std::istream &in, Agency &ag)
{

    in >> ag.agency_boss.first_name;
    in >> ag.agency_boss.second_name;
    in >> ag.agency_boss.email;
    in >> ag.agency_name;
    in >> ag.servicing_city;
    in >> ag.agency_age;

    return in;
}