// Lynda C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>

using namespace std;

const char * prompt();
int jump(const char *);

void fA() {
	puts("this is fA()");
}
void fB() {
	puts("this is fB()");
}
void fC() {
	puts("this is fC()");
}

void(*funcs[])() = { fA, fB, fC, nullptr };

int main(int argc, char * argv) {
	while (jump(prompt()));
	puts("\nDone");
	return 0;
}

const char * prompt() {
	puts("Choose an option:");
	puts("1: fA()");
	puts("2: fB()");
	puts("3: fC()");
	puts("Q: Quit");
	printf(">> ");

	fflush(stdout);
	const int buffsz = 16;
	static char response[buffsz];
	fgets(response, buffsz, stdin);

	return response;
}

int jump(const char * rs) {
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;

	int func_length = 0;
	while (funcs[func_length] != NULL) {
		func_length++;
	}
	int i = (int)code - '0';
	i--;
	if (i < 0 || i >= func_length) {
		puts("invalid choice");
		return 1;
	}
	else {
		funcs[i]();
		return 1;
	}
}

