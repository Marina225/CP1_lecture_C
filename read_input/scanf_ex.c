#include <stdio.h>

void main() {

float time;
float length;

printf("input time:"); scanf("%f", &time);
printf("input length:"); scanf("%f",&length);

float result=length/time;
printf("speed is: %f m/s\n", result);

}

