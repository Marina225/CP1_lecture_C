#include<stdio.h>

int myFunction_ref(int* x, int* y) {
  return *x + *y;
}

int main() {
	int a=5, b=3;
	int* c=&a, *d=&b;

	printf("Result is: %i", myFunction_ref(c, d));

  return 0;
}

