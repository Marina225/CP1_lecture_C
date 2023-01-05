#include <stdio.h>

int main(){

//danger for infinite loop
// harder to debug
//label indicates from which line forward the execution will be conducted

LOOP: printf("print at LOOP label\n");
for (int i =0; i<5; i++)
{
	if (i==1)
	{
	printf("exiting at i=%i\n", i);
	goto LOOP;
	}
	printf("%i\n", i);
}

return 0;
}
