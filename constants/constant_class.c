#include<stdio.h>
#define MAX_SIZE 100
#define PROGRAM void main 

PROGRAM (){
char full_name[MAX_SIZE];

const int A=100;

printf("%i\n", A);
fgets(full_name, A, stdin);
printf("%s", full_name);
}
