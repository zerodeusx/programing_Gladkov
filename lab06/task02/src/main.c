#include <stdio.h>
#define PD 1  		//start of range
#define KD 200		//end of range
#define LEN 100		//array length (max)

int main() {
	int prime[LEN] = {0};						//initializing the array 
	int j = 0;
	for (int diap = PD; diap < KD; diap++ ) {	//loop for fiding is the number prime or not
		int flag = 0;
		for (int i = 2; i < diap; i++) {		//isn't prime, since the number can be divided by a different number
			if (diap % i == 0) {
				flag = 0;//false
				break;
			} else {
				flag = 1;//true
			}
		}
		if (flag == 1) {
			prime[j] = diap;					//printing the number in the array, if it's prime
			j++;
		}
	}
	return 0;
}
