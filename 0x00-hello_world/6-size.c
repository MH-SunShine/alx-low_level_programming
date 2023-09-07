#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	int i;
	float f;
	long li;
	long long lli;
	char c;

	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	return (0);
}
