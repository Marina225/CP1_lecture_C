#include<stdio.h>

int main(){

int  a=-1;
float sum=0;
int count=0;

while(a!=0){
printf("Enter positive number\n");
scanf("%i", &a);

sum=sum+a;
count++;


if (a<0){
printf("ERROR - input positive number\n");
//return 1;

}

if(a==0 && sum!=0){
printf("average of inputed numbers is: %.2f\n", (float) sum/count);
}
else if(sum==0){
printf("NO AVERAGE\n");
}
}
return 0;
}
