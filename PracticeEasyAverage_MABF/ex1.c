#include<stdio.h>
#include<string.h>

int main(){

char s[50];
printf("insert string:\n");
//scanf("%s", s);

fgets(s, 20, stdin);


for (int i=strlen(s); i>=0;i--)
	printf("%c", s[i]);


return 0;
}









PRIMES BELOW A SPECIFED NUMBER:
{
    int n;
    int count = 0;
    int is_prime;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        is_prime=1;
        for (int j = 2; j < i; j++) //check for eachindividual one if it is divisible
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            count++;
        }
    }

    printf("There are %d prime numbers less than or equal to %d\n", count, n);

    return 0;
}


ODD/EVEN:
int main(){


int size;
printf("define the length of the array: \n");
scanf("%i", &size);

int arr[size];
int even[size];
int odd[size];

int j=0, n=0;
printf("input numbers to be included in the array of size %i: \n", size);

for(int i =0; i<size; i++){
        scanf("%i", &arr[i]);

        if (arr[i]%2==0){   ///create two lists one  odd one even and use a counter for both of them
        even[j]=arr[i];
        j++;
        }
        else{
        odd[n]=arr[i];
        n++;
        }
}




ROMAN NUMBERS:
#include <stdio.h>

int main4() {
    int num;
    printf("Vnesi številko: ");
    scanf("%d", &num);

    printf("Rimski format številke: ");

    while (num != 0) {

        if (num >= 1000)       // 1000 - m
        {
            printf("m");
            num -= 1000;
        } else if (num >= 900)   // 900 -  cm
        {
            printf("cm");
            num -= 900;
        } else if (num >= 500)   // 500 - d
        {
            printf("d");
            num -= 500;
        } else if (num >= 400)   // 400 -  cd
        {
            printf("cd");
            num -= 400;
        } else if (num >= 100)   // 100 - c
        {
            printf("c");
            num -= 100;
        } else if (num >= 90)    // 90 - xc
        {
            printf("xc");
            num -= 90;
        } else if (num >= 50)    // 50 - l
        {
            printf("l");
            num -= 50;
        } else if (num >= 40)    // 40 - xl
        {
            printf("xl");
            num -= 40;
        } else if (num >= 10)    // 10 - x
        {
            printf("x");
            num -= 10;
        } else if (num >= 9)     // 9 - ix
        {
            printf("ix");
            num -= 9;
        } else if (num >= 5)     // 5 - v
        {
            printf("v");
            num -= 5;
        } else if (num >= 4)     // 4 - iv
        {
            printf("iv");
            num -= 4;
        } else if (num >= 1)     // 1 - i
        {
            printf("i");
            num -= 1;
        }

    }

    return 0;
}





