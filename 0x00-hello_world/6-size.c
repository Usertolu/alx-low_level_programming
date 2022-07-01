#include<stdio.h>
/**
 * main-Entry point
 * Return: Always 0(success)
*/
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("Size of a char: %lu byte(S)\n", sizeof(c));
	printf("Size of an int: %lu byte(S)\n", sizeof(i));
	printf("Size of a long int: %lu byte(S)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(ll));
	printf("Size of a float: %lu byte(S)\n", sizeof(d));
	return (0);
}
