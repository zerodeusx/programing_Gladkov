#pragma once

using namespace std;

#include <iostream>
#include <fstream>
#include <cassert>

int amount_of_arr(string filename);

void amounts_in_file(string filename, int *arr);

void fill_arrays(string filename, int **to_fill, int *info);

void test_indexing(int *arr, int size);

void test();