#include <stdio.h>

int main() {
	char strIn[] = "Hello  World and    others";
	int len = 0;				//aray length
	int count = 0;				//initializing amount of words

	for (int i = 0; ; i++) {	//finding array's length
		if (strIn[i] == '\0') {
			break;
		} else {
			len++;
		}
	}

	//finding the amount of words
	for (int i = 0; i < len; i++) {							
		if (strIn[i] != ' ' && (strIn[i + 1] == ' ' || strIn[i + 1] == '\0')) {
			count++;
		} 
	}
	return 0;
} 
