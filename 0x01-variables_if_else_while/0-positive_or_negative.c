#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always Zero (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		print("is possitive");
	}else if(n==0)
	{
		print("is zero");
	}else
	{
		print("is negative");
	}	
	return (0);
}

