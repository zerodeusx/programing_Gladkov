CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference 


all: clean prep compile

format:
	doxygen
compile:
	$(CC) -c $(C_OPTS) m_lib/src/lib.c -o m_lib/src/mylib.o
	ar rcs m_lib/src/mylib.a m_lib/src/mylib.o
	$(CC) -c $(C_OPTS) m_main/src/main.c m_lib/src/lib.c m_lib/test/test.c
	$(CC) -o static_lib $(C_OPTS) main.o test.o lib.o -L. -l:m_lib/src/mylib.a
	rm main.o lib.o test.o m_lib/src/mylib.a m_lib/src/mylib.o


format: #TODO

tidy: # TODO 
