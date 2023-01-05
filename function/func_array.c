#include<stdio.h>

void display_value(int age1, int age2) {
  printf("by value:\n");
  printf("%d\n", age1);
  printf("%d\n", age2);
}

void display_reference(int* age1, int* age2) {
printf("by reference:\n");
  printf("%d\n", *age1);
  printf("%d\n", *age2);
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display_functions()
  display_value(ageArray[1], ageArray[2]);
	  display_reference((ageArray+1), (ageArray+2)); 
	  return 0;
}
