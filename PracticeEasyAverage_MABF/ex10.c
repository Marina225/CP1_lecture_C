#include<stdio.h>
#include<math.h>

int main(){

    float a,b,C;

    printf("insert size of side a:");
    scanf("%f", &a);

    printf("insert size of side b:");
    scanf("%f", &b);

    printf("insert size of angle C:");
    scanf("%f", &C);
    float C_rad=M_PI*C/180;

    float c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(C_rad));
    float beta=acos((pow(b,2) - pow(a,2)-pow(c,2)/(-2*a*c)));
    float alfa=acos(pow(a,2)-pow(b,2)-pow(c,2)/(-2*b*c));

   // printf("%f, %f, %f", alfa, beta, C_rad);
    if(alfa==M_PI/2||C_rad==M_PI/2||beta==M_PI/2)
     y   printf("RIGHT TRIANGLE\n");
    else if(alfa>M_PI/2||beta>M_PI/2||C_rad>M_PI/2)
        printf("OBTUSE TRIANGLE\n");
    else if (alfa<M_PI/2 && beta<M_PI/2 && C_rad<M_PI/2)
            printf("ACUTE TRIANGLE\n");
    else
	printf("Triangle is neither of the above\n");

        return 0;
}
