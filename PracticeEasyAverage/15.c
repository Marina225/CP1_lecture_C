#include<stdio.h>

int main(){

int i=1;
int number=2;


printf("1001 the prime number is:\n");

while (i<1001){
int is_prime=1;

for(int j=2;j<number; j++){

	if (number%j==0){
	is_prime=0;
	break;
	};
};

if(is_prime==1){
i++;
//printf("%i \n", i);
};

number++;
};

printf("%i \n", number);

return 0;
}
