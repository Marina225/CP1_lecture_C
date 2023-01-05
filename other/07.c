#include<stdio.h>

int main(){
    // Declare an array A of size 100000 and a variable t
    int A[100000];
    int t;

    // Read in a value for t using scanf
    scanf("%d", &t);

    // Enter a loop that will iterate t times
    while (t--) {
        // Declare a variable n and read in a value for it using scanf
        int n;
        scanf("%d", &n);

        // Read in n values for the array A using a for loop and scanf
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);

        // Sort the array A using a bubble sort algorithm
        int size=n;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size - 1; ++j) {
                int c = A[j];
                int n = A[j + 1];
                if (c > n) {
                    A[j] = n;
                    A[j + 1] = c;
                }
            }
        }

        // Declare variables for the counting process
        int num = 0;
        int need = 0;
        int ans = 0;

        // Iterate through the sorted array and count the number of times that the maximum value in a sub-sequence is reached
        for (int i = 0; i < n; i++) {
            need = need > A[i] ? need : A[i];
            num++;
            if (num == need) {
                need = num = 0;
                ans++;
            }
        }

        // Print the result using printf
        printf("%d\n", ans);
    }
}

