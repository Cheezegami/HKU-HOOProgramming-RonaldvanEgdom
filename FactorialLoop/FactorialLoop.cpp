// FactorialLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

unsigned int factorial(unsigned int number) {
	unsigned int returnValue = 1;
	while (number > 1) {
		returnValue = returnValue * number;
		printf("number is : %ld\nreturnValue is : %ld\n", number,returnValue);
		number--;
	}
	return returnValue;
}
int main()
{
	unsigned int number = 10;
	printf("Factorial of %ld is %ld\n",number,factorial(number));
    return 0;
}



