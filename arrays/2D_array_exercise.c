#include<stdio.h>

int main(){
int m[3][3]={1,2,3,4,5,6,7,8,9};
/*int m2[][3]={
	{1,2,3},
	{4,5,6},
	{8,9,10}
};*/

//matrix
int i;
for(i=0;i<3;i++){
	for (int j=0;j<3;j++)
	{
	printf("%i ",m[i][j]);
	}
   printf("\n");
};
//diagonal
for(i=0;i<3;i++){
        for (int j=0;j<3;j++)
        {
	if (i==j)  
      	printf("%i ",m[i][j]);
        }printf("\n");
};

//second column
for(i=0;i<3;i++){
        printf("%i\n",m[i][1]);
        }
//max
int max=m[0][0];

for(i=0;i<3;i++){
        for (int j=0;j<3;j++)
        {
	if (max<m[i][j]){
	max=m[i][j];
        };
};
printf("max: %i\n", max);


return 0;
}
