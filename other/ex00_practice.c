#include<stdio.h>

int main(){
//declaring variable test
int test;
scanf("%d", &test);

while(test--){
//defining the length of array
int n;
scanf("%d", &n);
getchar();

int size=n;

//initializing the array with n elements
int a[size];

//populating the array
for (int i=0; i<size;i++){
	scanf("%d", &a[i]);
}

//sorting the array (ascending)
for (int i=0;i<size;i++){
	for (int j=0; j<size-1;j++){
		int c=a[j]; //1  //3
		int n1=a[j+1]; //3  //4
		if (c>n1){
			a[j]=n1;
			a[j+1]=c;
}
}
}

//printinf the array
for(int i=0; i<size; i++){
printf("%d ", a[i]);
}

printf("\n");
//comparing naighbouring elements
int breaking=1;
for (int i=1; i<=size;i++){
//exiting if difference higher than 1 (condition)
	if ((a[i]-a[i-1])>1){
		//breaking if and only if the difference is greater than  1
		breaking=0;
		printf("NO\n");
		break;
	}
}


if (breaking==1){
printf("YES\n");
}
}

return 0;
}
