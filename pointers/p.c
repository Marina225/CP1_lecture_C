#include<stdio.h>

void main (){
int *p1;
int * p2;
int* p3;

int a=4;
p1=&a;

printf("value of a: %i, %i \n", a, *p1);
printf("pointer of a: %p, %p\n", &a, p1);
printf("address /pointer to p1: %p\n", &p1);

/* value of a: 4, 4 
pointer of a: 0x7fff3c26fb1c, 0x7fff3c26fb1c
poiter to p1: 0x7ffc1181c240
*/
a=9;
*p1=111;

printf("value of a: %i, %i \n", a, *p1);
printf("pointer of a: %p, %p\n", &a, p1);
printf("address /pointer to p1: %p\n", &p1);

}
