// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "../ExampleLib/Source.h"

int main()
{
	test_call();
	int arr[10];           // BAD, warning 26494 will be fired
	int* p = arr;          // BAD, warning 26485 will be fired
	p++;
	return 0;
}

