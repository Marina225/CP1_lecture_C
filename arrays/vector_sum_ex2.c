#include<stdio.h>


void print_out(int v[],int size){
for (int i=0; i<size;i++)
printf("%i", v[i]);
}

int main(){
int a[]={1,2,3,4,5};
int b[]={1,1,1,1,1};
int c[5];

for (int i=0;i<5;i++){
c[i]=a[i]+b[i];
}

print_out(c, 5);


return 0;
}
