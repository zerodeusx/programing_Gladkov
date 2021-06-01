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

    ofstream MyWriteFile("/home/blank/ag.txt");

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

ostream& operator<< (std::ostream &out, const Mar_agency &ag)
{
    out << "\nAgency boss first name: " << ag.agency_boss.first_name <<
        "\nAgency boss second name: " << ag.agency_boss.second_name <<
        "\nAgency boss email: " << ag.agency_boss.email <<
        "\nAgency name: " << ag.agency_name <<
        "\nAgency city: " << ag.servicing_city <<
        "\nAgency age: " << ag.agency_age <<
        "\nAgency coop: " << ag.cooperation_country <<
        "\nAgency serv method: " << ag.servicing_method <<
        "\nAgency has weekends: " << ag.weekends;

    ofstream MyWriteFile("/home/blank/mar.txt");

    MyWriteFile << ag.agency_boss.first_name << endl;
    MyWriteFile << ag.agency_boss.second_name << endl;
    MyWriteFile << ag.agency_boss.email << endl;
    MyWriteFile << ag.agency_name << endl;
    MyWriteFile << ag.servicing_city << endl;
    MyWriteFile << ag.agency_age << endl;
    MyWriteFile << ag.cooperation_country << endl;
    MyWriteFile << ag.servicing_method << endl;
    MyWriteFile << ag.weekends;

    MyWriteFile.close();

    return out;
}

istream& operator>> (std::istream &in, Mar_agency &ag)
{

    in >> ag.agency_boss.first_name;
    in >> ag.agency_boss.second_name;
    in >> ag.agency_boss.email;
    in >> ag.agency_name;
    in >> ag.servicing_city;
    in >> ag.agency_age;
    in >> ag.cooperation_country;
    in >> ag.weekends;
    in >> ag.servicing_method;

    return in;
}

ostream& operator<< (std::ostream &out, const Law_agency &ag)
{
    out << "\nAgency boss first name: " << ag.agency_boss.first_name <<
        "\nAgency boss second name: " << ag.agency_boss.second_name <<
        "\nAgency boss email: " << ag.agency_boss.email <<
        "\nAgency name: " << ag.agency_name <<
        "\nAgency city: " << ag.servicing_city <<
        "\nAgency age: " << ag.agency_age <<
        "\nAgency service type: " << ag.service_type <<
        "\nAgency won cases: " << ag.won_cases;

    ofstream MyWriteFile("/home/blank/law.txt");

    MyWriteFile << ag.agency_boss.first_name << endl;
    MyWriteFile << ag.agency_boss.second_name << endl;
    MyWriteFile << ag.agency_boss.email << endl;
    MyWriteFile << ag.agency_name << endl;
    MyWriteFile << ag.servicing_city << endl;
    MyWriteFile << ag.agency_age << endl;
    MyWriteFile << ag.service_type << endl;
    MyWriteFile << ag.won_cases;

    MyWriteFile.close();

    return out;
}

istream& operator>> (std::istream &in, Law_agency &ag)
{

    in >> ag.agency_boss.first_name;
    in >> ag.agency_boss.second_name;
    in >> ag.agency_boss.email;
    in >> ag.agency_name;
    in >> ag.servicing_city;
    in >> ag.agency_age;
    in >> ag.service_type;
    in >> ag.won_cases;

    return in;
}

string Law_agency::print_l_ag() {

    string boss_f_name(this->agency_boss.first_name);
    string boss_s_name(this->agency_boss.second_name);
    string boss_email(this->agency_boss.email);
    string ag_name(this->agency_name);
    string serv_city(this->servicing_city);

    if (won_cases == -1){
        return get_info();
    }
    else {
        return
                "Agency boss first name: " + boss_f_name + "\n" +
                "Agency boss second name: " + boss_s_name + "\n" +
                "Agency boss email: " + boss_email + "\n" +
                "Agency name: " + ag_name + "\n" +
                "Agency city: " + serv_city + "\n" +
                "Agency age: " + to_string(this->agency_age) + "\n" +
                "Agency serv type: " + service_type + "\n" +
                "Agency won cases: " + to_string(this->won_cases) + "\n\n";
    }

}

string Mar_agency::print_m_ag() {

    string boss_f_name(this->agency_boss.first_name);
    string boss_s_name(this->agency_boss.second_name);
    string boss_email(this->agency_boss.email);
    string ag_name(this->agency_name);
    string serv_city(this->servicing_city);

    return
            "Agency boss first name: " + boss_f_name + "\n" +
            "Agency boss second name: " + boss_s_name + "\n" +
            "Agency boss email: " + boss_email + "\n" +
            "Agency name: " + ag_name + "\n" +
            "Agency city: " + serv_city + "\n" +
            "Agency age: " + to_string(this->agency_age) + "\n" +
            "Agency serv type: " + servicing_method + "\n" +
            "Agency weekends: " + to_string(weekends) + "\n" +
            "Agency cooperation: " + cooperation_country + "\n\n";
}
