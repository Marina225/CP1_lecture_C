#include <stdio.h>
/*
The deadline for the homework is fast approaching! Write a program that accepts the current time
(expressed in hours and minutes) and the time of the deadline (expressed in hours and minutes).
Both times are expressed as military time (1PM is denoted as 13). The program should display exactly
how many minutes are left before the deadline. You may assume that the current time and the
deadline time always falls within the same day.
Current hour: 13
Current minute: 30
Deadline hour: 14
Deadline minute: 45
You have 75 minutes left!
*/

int main() {
    int hours1;
    printf("Insert current hour: ");
    scanf("%i", &hours1);
    int minutes1;
    printf("Insert current minutes: ");
    scanf("%i", &minutes1);

    int hours2;
    printf("Insert deadline hour: ");
    scanf("%i", &hours2);
    int minutes2;
    printf("Insert deadline minutes: ");
    scanf("%i", &minutes2);

    int min_diff = (hours2 - hours1) * 60 + (minutes2 - minutes1);

    printf("You have: %i minutes left.\n", min_diff);

    return 0;
}