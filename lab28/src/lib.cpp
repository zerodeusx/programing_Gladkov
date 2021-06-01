#include "lib.h"

int amount_of_arr(string filename){

    int result;

    ifstream file(filename);

    if (file.is_open()){
        file >> result;
    }

    file.close();

    return result;
}

void amounts_in_file(string filename, int *arr){

    int number;

    ifstream file(filename);

    int counter = 0;
    int i = 0;
    int next = 0;
    int counter_temp = 0;

    while (file >> number) {
        if (counter == 1){
            arr[i] = number;
            next = number;
            i++;
            counter_temp = counter;
        }
        else if (counter == counter_temp + 1 + next && 1 + next != 1){
            arr[i] = number;
            next = number;
            i++;
            counter_temp = counter;
        }
        counter++;
    }

    file.close();
}

void fill_arrays(string filename, int **to_fill, int *info){

    int number;
    ifstream file(filename);

    int counter = 0;
    int counter_temp = 0;
    int i = 0;
    int repeats = 0;
    int index = 0;
    try{
        while (file >> number) {
            if (counter < 0){
                throw 505;
            }
            if (counter < counter_temp + info[i] + 1 && counter > 1){
                to_fill[repeats - 1][index] = number;
                if (index == info[i] - 1){
                    index = 0;
                }
                else {
                    index++;
                }
            }
            if (counter == 1 || counter % (counter_temp + info[i] + 1) == 0 && counter != 0){
                counter_temp = counter;
                if (repeats > 0){
                    i++;
                }
                repeats++;
            }

            counter++;
        }
    }
    catch (int num){
        cout << "Error number " << num;
    }

    file.close();
}

void test_indexing(int *arr, int size){
    int index;
    cout << "Enter an index for the array: ";
    cin >> index;

    try{
        if (index < 0 || index > size){
            throw 404;
        }
        else cout << "Your index is: " << arr[index] << endl;

    }
    catch (int num){
        cout << "Error number " << num << endl;
    }
}