#include<stdio.h>

void main(){

float a, b;
char c;

printf("give number1, number2 and operation as (+ - * /)");
scanf("%f %f", &a, &b);
getchar();
scanf("%c", &c);


switch(c){
case '+':
	printf("sum is: %f\n",a+b);
	break;
case '-':
        printf("substraction is: %f\n",a-b);
        break;
case '*':
        printf("multiplication is: %f\n",a*b);
        break;
case '/':
        printf("division is: %f\n",a/b);
        break;
default:
	printf("choose valid inputs");
	break;
}

}
