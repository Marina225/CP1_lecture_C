#include<stdio.h>

int main() {
    int day;
    printf("which day is start day \n(0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat)\n");
    scanf("%i", &day);
    int days;
    printf("how many days does it have?\n");
    scanf("%i",&days);

    printf("Su   Mo   Tu   We   Th   Fr   Sa\n");
    for (int i=0; i<day;i++)
        printf("     ");

    for (int i=1; i<=days;i++){
        printf("%2i   ", i);
        if ( (i+day)%7==0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
