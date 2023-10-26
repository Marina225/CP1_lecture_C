#include<stdio.h>

int main(){

//getting the value for test cases
int test;
scanf("%d", &test);

//while(test>0)
while(test--){

//initializing and getting the size for each test case
int size;
scanf("%d", &size);

//initializing and populating the array for each test case
int a[size];
for (int i=0; i<size;i++){
	scanf("%d", &a[i]);
}

// sort
for (int i=0; i<size;i++){
	for (int j=0; j<size;j++){
		int c = a[j];
		int b =a[j+1];
		if (b<c){
			a[j]=b;
			a[j+1]=c;
}
}
}
int flag=1;
//comparison
for (int i=0;i<size;i++){
	if (a[i]-a[i-1]>1){
		printf("NO\n");
		flag=0;
		break;
		}
}

if (flag==1)
printf("YES\n");


/*
[1 2 3 5]
NO

[2 3 4 5 5]
[3 4 5 5]
[4 5 5]
5 5
5
YES
*/


//test--;
}


return 0;
}
