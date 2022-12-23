#include <stdio.h>
int main(){
int t, size, n, tmp;

printf("How many test cases?");
scanf("%d", &t);

while(t--){
	scanf("%d", &size);

int a[size];
for(int i=0; i<size; i++){
	scanf("%d", &a[i]);
}
for(int i=0; i<size; i++){
	for(int j=0; j<size-1; j++)
	{
		if(a[j]>a[j+1]){
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
}
}
}
for(int i=0; i<size; i++)
printf("%i\n", a[i]);

int flag;
for(int i=0; i<size; i++){
	if (a[i]-a[i-1] > 1){
		printf("No\n");
		flag=0;
		break;
		}
}
if (flag==1)
printf("Yes\n");
}
return 0;
}
