#include<stdio.h>

int main(){

LOOP: 
int a=0;
while (a<50){
printf("%i\n", a);
a++;
if (a==12);
{
	printf("we are using go to statement to exit\n");
	goto LOOP;
}

}


return 0;
}
