#include<stdio.h>


int main(){
    int n;
    scanf("%i", &n);  //number of coins that are there
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%i", &num); //values of each individual coin in integers
        a[i] = num;
        sum += a[i]; //directly calcualtin the sum of all coins
    }
    sum = sum / 2; //getting the half of the sum of all coins
//sorting smallest to largest
     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            int c = a[j];
            int n = a[j + 1];
                if (c > n) {
                    a[j] = n;
                    a[j + 1] = c;
            }
        }
    }

    int cnt = 0; //counter of coins - ANSWER
    int ans = 0; //sum of coins taken by the nasty twin
    for (int i = n - 1; i >= 0; i--) {
        ans += a[i];
        cnt++;   //or you can sort thme in reverse in take the first n coins to get the ans is bigger than sum
        if (ans > sum)
            break;
    }
    printf("%i\n", cnt);


return 0;
}
