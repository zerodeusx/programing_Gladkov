targets = main.bin test.bin

CС = clang++
C_OPTS = -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./5b 5b/lib.c


all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: main.bin test.bin

main.bin: 5b/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
test.bin: test/test.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
test: clean prep compile
	./dist/test.bin
run: clean prep compile
	./dist/main.bin
format: #TODO

tidy: # TODO 
