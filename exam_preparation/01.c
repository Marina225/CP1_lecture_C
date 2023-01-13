/*
The prime factors of 13195 are 5, 7, 13, 29.
Write a C programming to find the largest prime factor of the number 438927456?
Expected Output:
415651
 */

#include <stdio.h>
#include <math.h>

int is_prime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int n=438927456;
    for (int i = n/2; i >= 2 ; i--) { 
        if(n%i==0 && is_prime(i)){
                printf("%i\n", i);
                break;
        }
    }
    return 0;
}