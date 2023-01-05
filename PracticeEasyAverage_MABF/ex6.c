#include<stdio.h>

int main(){

int a;

printf("Provide a number between 1 and 10:");
scanf("%i", &a);

if (a>10 || a<1)
return 1;

int m[11][a+1];
printf("    x   ");
for (int i=1;i<=a;i++)
printf("%5i   ", i);
printf("\n");

for (int i=1; i<=10;i++){
        printf("%5i   %5i   ", i, i);
        for(int j=2;j<=a;j++){
                printf("%5i   ", i*j);
}
printf("\n");

}

}
