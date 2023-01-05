#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
int val;
char strn1[50];
strcpy(strn1,argv[1]);
val = atoi(strn1);
printf("String value = %s\n", strn1);
printf("Integer value = %d\n", val);

char strn2[50];
strcpy(strn2,argv[2]);
val = atoi(strn2);
printf("String value = %s\n", strn2);
printf("Integer value = %d\n", val);
return (0);
}
