#include "lib.h"

int main(){
    for (;;){
//        string my_filename = "/home/blank/28.txt";
        string my_filename;
        cout << "\n\nEnter the filename for the program (enter \\exit for the program to stop): ";
        cin >> my_filename;

        if(my_filename == "\\exit"){
            break;
        }

        int amount_of_arrs = amount_of_arr(my_filename);
        cout << "\nYour file has " << amount_of_arrs << " arrays.\n";

        assert(amount_of_arrs >= 0);

        int amount_in_each_arr[amount_of_arrs];
        amounts_in_file(my_filename, amount_in_each_arr);

        cout << "\n";

        for (int i = 0; i < amount_of_arrs; i++){
            cout << "Array " << i + 1 << " has " << amount_in_each_arr[i] << " elements.\n";
            assert(amount_in_each_arr[i] >= 0);
        }

        int** arr = new int*[amount_of_arrs];

        int index = 0;
        for (int i = 0; i < amount_of_arrs; i++) {
            arr[i] = new int[amount_in_each_arr[index]];
            index++;
        }

        fill_arrays(my_filename, arr, amount_in_each_arr);

        cout << "\nYour array looks like:\n";
        index = 0;
        for (int i = 0; i < amount_of_arrs; i++){
            for (int j = 0; j < amount_in_each_arr[index]; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
            index++;
        }

        index = 0;
        int max = arr[0][0];
        int max_vals[amount_of_arrs];
        for (int i = 0; i < amount_of_arrs; i++){
            for (int j = 0; j < amount_in_each_arr[index]; j++){
                if (arr[i][j] > max){
                    max = arr[i][j];
                }
            }
            max_vals[i] = max;
        }
        cout << endl;
        for (int i = 0; i < amount_of_arrs; i++){
            cout << "Highest value in array " << i + 1 << " is: " << max_vals[i] << endl;
        }
        cout << endl;

//        string my_filename2 = "/home/blank/28_result.txt";
        string my_filename2;
        cout << "Enter the filename for the program output: ";
        cin >> my_filename2;

        ofstream output(my_filename2);
        for (int i = 0; i < amount_of_arrs; i++){
            output << "Highest value in array " << i + 1 << " is: " << max_vals[i] << endl;
            assert(max_vals[i] >= 0);
        }

        test_indexing(max_vals, amount_of_arrs);

        for (int i = 0; i < amount_of_arrs; i++) {
            delete[] arr[i];
        }
        delete[] arr;

        test();

    }

    return 0;
}