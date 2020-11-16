#include <stdio.h>

#define LEN 15

int main() {
    char zap = '_';					//For filling
    char strIn[] = "Ivanov";		//String we use inside our fill

    char strResult[LEN];			

    int lenIn = 0;					

    for (int i = 0; ; i++) {		//Finding the array size
        if (strIn[i] == '\0') {
            break;
        } else if (strIn[i] != 0) {
            lenIn++;
        }
    }

    int lenZap = LEN - lenIn - 1;	//Amount of total fills

    int halfLenZap = lenZap / 2;	//Amount of fill before string


    for (int i = 0; i < halfLenZap; i++) {							//Putting in the starting fills
        strResult[i] = zap;
    }

    for (int i = halfLenZap; i < (halfLenZap + lenIn);) {			//Putting in the string
        for (int j = 0; j < lenIn; j++) {
            strResult[i] = strIn[j];
            i++;
        }
    }

    for (int i = (halfLenZap + lenIn); i < LEN - 1; i++) {			//Putting in the end fills
    strResult[i] = zap;
    }

    strResult[LEN] = '\0';											//Task requirement

    return 0;


}
