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
