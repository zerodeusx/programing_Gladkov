#include "lib.h"

string Agency::get_info() const {

    string boss_f_name(this->agency_boss.first_name);
    string boss_s_name(this->agency_boss.second_name);
    string boss_email(this->agency_boss.email);
    string ag_name(this->agency_name);
    string serv_city(this->servicing_city);

    stringstream result;

    result << "Agency boss first name: " + boss_f_name + "\n" +
              "Agency boss second name: " + boss_s_name + "\n" +
              "Agency boss email: " + boss_email + "\n" +
              "Agency name: " + ag_name + "\n" +
              "Agency city: " + serv_city + "\n" +
              "Agency age: " + to_string(this->agency_age) + "\n\n";

    return result.str();
}
