/*
 * coin.c - flip a coin
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printUsage()
{
	printf("coin - flip a coin\n");
}

int main(int argc, char* argv[])
{
	// Number generated by RNG
	int num;

	// Print usage if there are any args
	if(argc != 1)
	{
		printUsage();
		return 1;
	}

	// Generate random seed
	srand((unsigned int)time(NULL));

	// Get random number between 1 and 2
	num = rand() % 2;

	// Print heads if num = 0, else tails
	if(num == 0)
	{
		printf("heads\n");
	} else {
		printf("tails\n");
	}

	return 0;
}
