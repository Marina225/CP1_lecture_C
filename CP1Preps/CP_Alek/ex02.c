#include <stdio.h>

int main(){
	int i, j, c=0, temp;
	int a[c];
	int sum1=0, sum2=0;
	printf("How many coins are on the table?\n");
	scanf("%i", &c);
	for(i=0; i<c; i++){
		scanf("%i", &a[i]);
	}
	for(i=0; i<c; i++){
		for(j=0; j<c-1; j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0; i<c; i++){
		sum1 += a[i];
		while (j<c-i-1){
			for(j=i+1; j<c-i-1; j++){
			sum2 += a[j];
		}
		}
	}
	if (sum1 > sum2){
			printf("%i", c-j+1);
	}
	
	return 0;
}
