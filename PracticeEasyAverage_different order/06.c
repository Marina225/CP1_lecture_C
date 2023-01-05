#include<stdio.h>

int main(){

int arr[10];
int min;

for (int i=1; i<=10; i++ ){
printf("type %i integer: ", i);
scanf("%i", &arr[i-1] );
}

min=arr[0];
for(int i=0;i<10;i++){
if (min>arr[i]){
min=arr[i];
}
}

printf("minimum value is: %i\n", min);
return 0;
}
