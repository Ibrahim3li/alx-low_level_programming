#include <stdio.h>

/**
 * main - Entry point 
 * *Return: always 0 (success)
 */ 
int main(void)
{
	prinft("Size of a char:%d byte(s)", sizeof (char));
	printf ("Size of an int:%d byte(s)", sizeof (int));
	rintf ("Size of a long int:%d byte(s)", sizeof(long int));
	printf("Size of a long long int:%d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}