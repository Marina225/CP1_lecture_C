	// Program to implement atoi() in C
#include <stdio.h>

// atoi() function
int myatoi(char str[]) {
	// Initialize result
	int res = 0;
	// Iterate through all characters
	// of input string and update result
	// take ASCII character of corresponding digit and
	// subtract the code from '0' to get numerical
	// value and multiply res by 10 to shuffle
	// digits left to update running total
	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	// return result.
	return res;
}

// Main progra
int main(int argc, char* argv[])
{
	int i , sum=0;
	if( argc < 2 ) {
		printf("Too little arguments supplied. Supply at least 2 arguments.\n");
	return 1;
   }
	for( i = 1; i < argc; i++)
		sum += myatoi(argv[i]);
	printf("Total: %d\n" , sum);
	return 0;
}
