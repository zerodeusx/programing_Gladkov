targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir lab05/dist
	mkdir lab06/dist
compile:
	$(CC) $(C_OPTS) lab05/task1/src/main.c -o lab05/dist/main1.bin
	$(CC) $(C_OPTS) lab05/task2/src/main.c -o lab05/dist/main2.bin
	$(CC) $(C_OPTS) lab05/task3/src/main.c -o lab05/dist/main3.bin
	$(CC) $(C_OPTS) lab05/task4/src/main.c -o lab05/dist/main4.bin
	$(CC) $(C_OPTS) lab05/task5/src/main.c -o lab05/dist/main5.bin
	$(CC) $(C_OPTS) lab06/task1/src/main.c -o lab06/dist/main1.bin
	$(CC) $(C_OPTS) lab06/task2/src/main.c -o lab06/dist/main2.bin
	$(CC) $(C_OPTS) lab06/task3/src/main.c -o lab06/dist/main3.bin
	$(CC) $(C_OPTS) lab06/task4/src/main.c -o lab06/dist/main4.bin
	$(CC) $(C_OPTS) lab06/task5/src/main.c -o lab06/dist/main5.bin
	$(CC) $(C_OPTS) lab06/task6/src/main.c -o lab06/dist/main6.bin
run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO