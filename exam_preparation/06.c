#include<stdio.h>

/*Read a positive integer from the user. Let the program add up all positive odd numbers that are smaller than the given number. Make a function called oddSum, which returns the sum, and takes the given number as input.
OUTPUT:
Enter the number: 10
Sum of odd predecessors: 25
*/

int oddSum(int n){
    int sum=0;
    for (int i = 0;  i < n; i++)
    {
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){

    int n;
    printf("Insert a positive integer: ");
    scanf("%i", &n);
    if(n<=0){
        printf("insert a positive integer\n");
        return 1;
    }

    printf("odd sum is: %i\n", oddSum(n));

    return 0;
}