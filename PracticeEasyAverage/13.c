#include<stdio.h>

int main(){
int size=5;
int arr[size];
int duplicates=0;

printf("enter the elements to the array of size %i: \n", size);

for (int i=0; i<size; i++){
	scanf("%d", &arr[i]);
}

for (int n=0; n<size; n++){
	int a=arr[n];
	int count=1;
	for (int j=n+1;j<size;j++){
		if(a==arr[j]){
		count++;
		}
	}
	if (count>1){
	duplicates++;
	}
}

printf("total number of duplicates in this array is: %i\n", duplicates);

return 0;
}
