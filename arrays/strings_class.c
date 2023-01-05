#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char s0[5]="abc0\0";
char s1[]="abc-1";

char * s2="abc2";

char * s3=malloc(sizeof(char)*5);
strcpy(s3, "abc3");

char * s4=calloc(5, sizeof(char));
strcpy(s4,"abc4");

printf("%s \n", s0);
printf("%s \n", s1);
printf("%s \n", s2);
printf("%s \n", s3);
printf("%s \n", s4);

printf("len %lu \n",strlen(s1));

printf("comparisons s0, s1: %i\n", strcmp(s0,s1));

char new[50];
strcpy(new, s3);
printf("%s\n", new);

strcat(new, s3);
printf("%s\n", new);


fgets(new, 50, stdin);
printf("%s\n", new);



return 0;
}
