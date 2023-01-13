#include<stdio.h>
#include<math.h>

int main() {
    float ure;
    printf("Enter hour: ");
    scanf("%f", &ure);
    float min;
    printf("Enter minutes: ");
    scanf("%f", &min);

    float ure_deg = (360 * (ure*60+min)) / (12*60);
    float min_deg = (360 * min) / 60;
    int diff = ure_deg - min_deg;
    int diff2 = 360 - diff;

    printf("The angle is: %i in %i", diff, diff2);
}
