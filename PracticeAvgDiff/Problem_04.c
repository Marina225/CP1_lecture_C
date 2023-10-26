#include <stdio.h>
//We need an extra library to compute absolute value (abs())
#include <stdlib.h>


/*
We notice that there are *two aproaches to make a number as a sum of number containing only 1s:

1. We could coonstruct this number from the bottom up and add until we reach it (ex. 346 = 111 *3 + 11 + 1 + 1)

2. Or we could overshoot and then go down till we reach it (1000 = 1111 - 111)

But we also might need to switch between apraoches as we build the number, ex. 1002= 1111 -111 +1 +1, 

Therefore we will use recursion to make our programming esier and dynamicaly switch between aproaches




*/



//We first need two functions to solve the task

//a function to cound the number of digits in a number n
int count_digits(int n){
	
	int cnt=0;
	while(n>0){

		n=n/10;
		cnt++;
	
	}

	return cnt;
}

//a function to make a number with n digits of 1, ex. n=5 we get 11111

int make_ones(int n){

	//add the first digit
	int ones=1;

	//add all the other n-1 digits
	for (int i=0;i<n-1;i++){

		//we do this by multiplying by 10 and adding 1 (ex. we have 3 digits i.e. 111, to make 4 digits we 111*10=1110 then 1110+1 =1111)
		ones=ones*10+1;
	}

	return ones;

}


//We now make the recursive function for constructing the solution

int count_ones(int n){

// We first define the stopping criterion, if the number is <11 we know how to handle it
	if (n<11){

		//if n<11 we have two choices on how to solve it, either we add +1 n time (and use n ones) or we overshoot use 2 ones for 11 and then,
		//add -1 untill we reach the number, we chech whic is better and we return the smaller number
		if(2+(11-n)<n){

			return 2+11-n;
		
		} else{
		
			return n;
		
		}

	} else{

//We now define the recursive step

		//we count the number of digits in the number and make a number of 1s with as many digits as n (ex. n=900 we have digits=3, ones_num=111)
		int digits=count_digits(n);
		int ones_num=make_ones(digits);
		
		//we then see how many times our ones_number is contained in n

		int factor=n/ones_num;

		//if it's 0 times, then the n is smaller than the ones_number and we will have to overshoot
		if(factor==0){
			//if we overshoot we will use the ones_number once, and use 1s as many times as n has digits (ex. for 1000 = 1111-111 we will use 1111 only once),
			//and we then call the recursive funtion to calculate for the rest of n
			return digits + count_ones(ones_num - n);
		}
		//if we don't overshoot we will use the ones_number as many times as it is contaned in n, we add this to result
		//and we then call the recursive funtion to calculate for the rest of n
		return factor*digits + count_ones(abs(factor*ones_num - n));

	}

}


int main(){
// in the main, we input, call the recursion and ouput the solution

	int num;

	scanf("%d",&num);

	int res=count_ones(num);

	printf("%d\n", res);




}
