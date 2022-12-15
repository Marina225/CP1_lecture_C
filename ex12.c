#include<stdio.h>

int main(){

int i, sum;
sum=0;

printf("num:\n");
scanf("%d", &i);

while (i!=0){

sum=sum+i;

printf("sum: %i\n", sum);

printf("num:\n");
scanf("%d", &i);
}

return 0;
}
