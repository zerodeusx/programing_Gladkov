#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

void print_list(struct Agency *to_print);

int am_of_structs();

void write_to_file(struct Agency *to_write);

void read_from_file(int amount);

void push_to_end(struct Agency *head);

void remove_link(struct Agency **head, int index);

void boss_finder(struct Agency *head);

void test_remove_link();