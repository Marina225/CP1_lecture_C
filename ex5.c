#include <stdio.h>
void main(){
int var1=1;
char var2= 'n';
float var3=1.26;
double var4=79;

printf("%i , %c, %f, %f\n", var1, var2, var3, var4);
printf("%f , %i, %f, %c\n",(float) var1,(int) var2, (double) var3, (char) var4);

int sum1=var1+var2;

printf("sum1 %i\n",sum1);
printf("sum2 %f\n", var3+var4);

}


