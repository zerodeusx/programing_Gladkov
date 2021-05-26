#include "lib.h"

int main() {

    char* mass = (char*)malloc(20 * sizeof(char));

    strcat(mass, "abrakadabra");
    char mass2[6] = "TEXT2";

    mass = insert(mass, mass2, 4);
    reduce(mass,4,8);

    return 0;
}

