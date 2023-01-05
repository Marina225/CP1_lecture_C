#include <stdio.h>
#include <stdlib.h>

int main(){
printf("%s\n", getenv("USER"));

putenv("USER1=MARINA");
printf("%s\n", getenv("USER"));

setenv("USER", "MAAAARINA",0 );
printf("%s\n", getenv("USER"));

printf("%s\n", unsetenv("USER1"));

return 0;
}
