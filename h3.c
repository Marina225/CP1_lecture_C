#include <stdio.h>

int main(){

char s[]="Hello There";

printf("tell me your name:\n");
scanf("%s",s);
printf("your name is: %s\n", s);

printf("size: %lu\n", sizeof(s));

return 0;
}
