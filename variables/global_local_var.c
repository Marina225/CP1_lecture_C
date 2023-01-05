#include <stdio.h>

int c=12;

float f1(){
float a=1, b=3;

return a+b; //4
}

int f2(){

int a=2, b=3;
return a+b; //5

}

void main(){
printf("%i\n",c );
printf("%f", f1());
printf("\n");
printf("%i\n", f2());
}
