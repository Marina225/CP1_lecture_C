#include<stdio.h>

int max(int arr[]){
	int max=arr[0];
	for(int i=0; i<3; i++){
		if(arr[i]>max)
			max=arr[i];
}

return max;
}

double avg(int arr[]){
	double avg, sum=0.0;
        for(int i=0; i<3; i++){ 
		sum+=arr[i];
}
return sum/3;
}

int main(){
	int arr[]={1,2,44};
	
	printf("max: %i\n", max(arr));
	printf("avg: %f\n", avg(arr));


return 0;
}

