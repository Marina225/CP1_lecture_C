#include<stdio.h>

void main(){
int m[][3]={1,2,3,4,5,6,7,8,9};
int m2[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};


for (int y=0;y<3;y++){
	printf("%i ", m[y][2]);
	}printf("\n");

printf("\n");

int max=m[0][0];
for (int y=0;y<3;y++){
	for(int x=0;x<3;x++)
	if (max<m[y][x])
	max=m[y][x];
        //printf("%i ", m[y][2]);
        }printf("\n");

}

printf("%i", max);
printf("\n");


}
