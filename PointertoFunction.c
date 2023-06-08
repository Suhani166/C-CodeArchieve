#include <stdio.h>
// A normal function with an int parameter
// and void return type
void print(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// ptr is a pointer to function print()
	void (*ptr)(int) = &print; // OR void (*ptr)(int) = print;


	//invoking/calling the function using ptr
	(*ptr)(90);// OR ptr(90);

	return 0;
}
