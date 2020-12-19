#include <lib.h>

int main() {

	//our text to find out how many repeating letters it has
    char symbols[] = "abrahamisfunny";

    int len = sizeof(symbols) - 1;  // deleting \0 with -1

    chances(len, symbols);

    return 0;
}

