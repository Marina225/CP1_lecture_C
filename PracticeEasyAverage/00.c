#include <stdio.h>
#include <math.h>

double toRad(double deg){
return (M_PI *deg)/180;
}

int main() {
  // Declare variables
  double a, b, c, A, B, C, dd;

  // Prompt user for input
  printf("Input side a: ");
  scanf("%lf", &a);
  printf("Input side b: ");
  scanf("%lf", &b);
  printf("Input angle C: ");
  scanf("%lf", &C);

    C = toRad(C);

    c = sqrt((pow(a, 2) + pow(b, 2) - 2 * a * b * cos(C)));
    B = asin(b * sin(c) / c);
    A = asin(a * sin(b) / b);

    printf("Sides a: %f, b: %f, c: %f\n", a, b, c);
    printf("Angles A: %f, B: %f, C: %f\n\n", A, B, C);

    dd = M_PI / 2;
    if (A == dd || B == dd || C == dd) printf("Right triangle \n");
    else if (A < dd && B < dd & C < dd) printf("Acute triangle \n");
    else if (A > dd || B > dd || C > dd) printf("Obtuse triangle \n");


  return 0;
}

