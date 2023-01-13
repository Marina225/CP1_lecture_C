#include <stdio.h>
#include <ctype.h>

/*Write a program in C to print all the alphabets using pointer.*/

//strlwr
int main() {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char *p = alphabet;

  printf("\n %c", *(p+5));
  while (*p != '\0') {
    printf("%c ", toupper(*p));
    p++;
  }


  return 0;
}