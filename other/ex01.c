#include<stdio.h>

int main(){
//initialize size
	int size;
	scanf("%d", &size);
	int arr[size];

// populate array
	for (int i=0; i<size; i++){
		scanf("%d",& arr[i]);
		}
//initialize k
int k=0;

//check neighbouring lights and reasign the following one to 0
for (int i=2; i<size-1; i++){
	if (arr[i] == 0 && arr[i-1]==1 && arr[i+1]){
		k++;
		arr[i+1]=0;
}
}

printf("%d", k);

return 0;
}
