#include<stdio.h>

int check(int a){

if (a<10)
{
return 0;
}
else{
return 1;
}
}

int main(){

int R, C;

printf("enter number between 0 and 10 for the value for R: ");
scanf("%i", &R);

printf("enter number between 0 and 10 for the value for C: ");
scanf("%i", &C);

if (check(R)||check(C)){
return 1;
}

int m1[R][C];
int m2[C][R];

for (int i=0; i<R; i++){
	for (int j=0;j<C;j++){
	printf("enter value for m1%i%i: ", i,j);
	scanf("%i", &m1[i][j]);
}
}

for (int i=0; i<R; i++){ 
        for (int j=0;j<C;j++){ 
        printf("%i ", m1[i][j]);
}	printf("\n");
}


for (int i=0; i<C; i++){ 
        for (int j=0;j<R;j++){ 
        printf("enter value for m2%i%i: ", i,j);
        scanf("%i",&m2[i][j]);
}
}

for (int i=0; i<C; i++){ 
        for (int j=0;j<R;j++){ 
        printf("%i ", m2[i][j]);
}       printf("\n");
}

// Declare the result matrix
  int result[R][R];

 /* // Initialize the result matrix to 0
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < R; j++) {
      result[i][j] = 0;
    }
  }*/

  // Multiply the two matrices
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < R; j++) {
      result[i][j]=0;
	for (int k = 0; k < C; k++) {
        result[i][j] += m1[i][k] * m2[k][j];
}
}
}


  // Print the result of the multiplication
  printf("\nResult of multiplication (%d x %d matrix):\n", R, R);
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < R; j++) {
      printf("%d  ", result[i][j]);
    }
    printf("\n");
  }


return 0;
}
