#include<stdio.h>
int main(){
int i, x[4], sum=0;

printf("choose four numbers:\n");
for (i=0;i<4;i++){
scanf("%i", &x[i]);
sum=sum+x[i];
}

printf("sum: %i", sum);
printf("\n[");

for (i=0; i<4;i++)
{
//if(i<4)
printf("%i, ", x[i]);
//else
//printf("%i", x[i]);
}
printf("]\n");

return 0;
}
