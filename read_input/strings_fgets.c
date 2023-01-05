#include<stdio.h>
#include<string.h>
//#define MAX_SIZE 100

int main(){
const int MAX_SIZE=100;

char full_name[MAX_SIZE];
fgets(full_name, MAX_SIZE, stdin);
printf("%s\n",full_name);


return 0;
}
