#include <stdio.h>
#include <string.h>

int main()
{
char a[100], b[100];
printf("Enter a string to check if it is a palindrome \n");
gets(a);

strcpy(b,a);
//strrev does not work on linux
strrev(b);

if (strcmp(a,b) == 0)
{
printf("Entered string is a palindrome. \n");
}
else
{
printf("Entered string is not a palindrome. \n");
}

return 0;
}
