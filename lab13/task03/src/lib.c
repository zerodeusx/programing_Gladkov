#include <lib.h>

void chances (int len, char word[]) {
	//our alphabet
    char alphabet[num] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                          't', 'u', 'v', 'w', 'x', 'y', 'z'};
    //empty arrays, which have the amount of repeat and the frequency of letters                      
    int counter[num] = {0};
    float frequency[num] = {0};

    int j;
    int i;


    //comparing each letter with the other and making the counter index of that letter bigger for 1
    for (i = 0; i < len; i++) {
        for (j = 0; j < num; j++) {
            if (word[i] == alphabet[j]) {
                counter[j]++;
            }
        }
    }
    
    for (i = 0; i < num; i++) {                 
        frequency[i] = (float) counter[i] / (float) len;
    }
    
}