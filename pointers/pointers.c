#include<stdio.h>

int main(){

int * p;
int* p1;
int *p2;
int* p3;
//a=5;
int a=5, b=3, c=6;

p3=&a;

printf("value of a: %i %i\n",a, *p3);
printf("value of p3: %p\n", p3);
printf("pointer to a: %p, %p\n", p3, &a);
/* value of a: 5 5
value of p3: 0x7ffe0c2e7484
pointer to a: 0x7ffe0c2e7484, 0x7ffe0c2e7484
*/

*p3=10;
printf("value of a: %i %i\n", a, *p3);
printf("value of p3: %p\n", p3);
printf("pointer to a: %p, %p\n", p3, &a);
/* value of a: 5 5
value of p3: 0x7ffe0c2e7484
pointer to a: 0x7ffe0c2e7484, 0x7ffe0c2e7484
*/


return 0;
}
