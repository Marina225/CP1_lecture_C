#include <stdio.h>
//#include <stdbool.h>

int main(){

//bool a=TRUE;
//printf("%i", a);

int n1, n2;
printf("n1 and n2:\n");
scanf("%d %d", &n1, &n2);

switch(n1<n2)
{
case 1:
	printf("n1 is smaller than n2\n");
	break;
case 0:
	printf("n1 is not smaller than n2\n");
	break;
	//if a variable is binary Default cannot be used
}

return 0;
}
