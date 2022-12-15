#include<stdio.h>

int main(){
float a,b;
char c;
printf("input a:");
scanf("%f", &a);

printf("input b:");
scanf("%f", &b);

getchar();
printf("operation as + - / *:");
scanf("%c", &c);

switch(c)
{
case '+':
	printf("%.2f\n", a+b);
	break;
case '-':
        printf("%.2f\n", a-b);
        break;
case '/':
        printf("%.2f\n", a/b);
        break;
case '*':
        printf("%.2f\n", a*b);
        break;
default:
	printf("not a valid imput\n");
	break;

}
return 0;
}
