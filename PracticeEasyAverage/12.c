#include<stdio.h>

int main(){


int size;
printf("define the length of the array: \n");
scanf("%i", &size);

int arr[size];
int even[size];
int odd[size];

int j=0, n=0;
printf("input numbers to be included in the array of size %i: \n", size);

for(int i =0; i<size; i++){
	scanf("%i", &arr[i]);

	if (arr[i]%2==0){
	even[j]=arr[i];
	j++;
	}
	else{
	odd[n]=arr[i];
	n++;
	}
}
printf("\neven numbers are: \n");
for (int i=0; i<j;i++)
	printf("%i ", even[i]);

printf("\nodd numbers are: \n");
for (int i=0; i<n;i++)
        printf("%i ", odd[i]);

printf("\n");

return 0;
}
