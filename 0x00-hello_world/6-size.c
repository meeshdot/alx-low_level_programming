#include<stdio.h>
/**
 * main - write a program that prints various computer types.
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e; 

printf("Size of a char: $lu byte(s)\n",(unsigned long)sizeof(a));
printf("size of an int: $lu byte(s)\n",(unsigned long)sizeof(b));
printf("size of an int: $lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of an int: $lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of an int: $lu byte(s)\n",(unsigned long)sizeof(e));
return (0);
}
