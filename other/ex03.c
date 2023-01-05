#include<stdio.h>

int main (){
int total;

scanf("%d", &total);

int a[total];
for (int i=0; i<total;i++){
	scanf("%d", &a[i]);
}

int sum=0, count=0;

for (int i=0; i<total; i++){
	for (int j=0; j<total-1;j++){
		if(a[i]>a[j+1]){
			a[i]=a[j+1];
}
}
}
//calculating half of total sum of coins
int sum2=0;
for (int i=0; i<total;i++)
	sum2+=a[i];
sum2=sum2/2;

for (int i=total-1;i>0;i--){
	sum+=a[i];
	count++;
//	printf("%d ",sum);
	if (sum>sum2)
	break;
}

printf("%d\n", count);

return 0;
}

