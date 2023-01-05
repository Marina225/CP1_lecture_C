#include <stdio.h>

float degreesCtoF(int cd){
return cd * ((float)1.8) + 32;
}

void main(){
int cd;
char type;

printf("enter degrees and type (as i and f): \n");
scanf("%i %c", &cd, &type);

if ((char)type=='f')
printf("%f F\n", degreesCtoF(cd));
else if ((char)type=='i')
printf("%i F\n", (int) degreesCtoF(cd));

}
