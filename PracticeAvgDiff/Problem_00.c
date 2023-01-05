#include<stdio.h>
#include<stdbool.h>


int main(){

//define array and t variable
    int a[100];
    int t;
    scanf("%d", &t); //ask user for t for the number of test cases
    while (t--) {
        int n;
        scanf("%d", &n); //ask user for n which is the number of of elements in the array
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
	int size=n;
	for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            int c = a[j];
            int n = a[j + 1];
            if (c > n) {
                    a[j] = n;
                    a[j + 1] = c;
        }
    }
}
//        sort(a, n, false); //sortfing the list so you can comaper to neighbouring ones
        bool flag = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] > 1) { //if the difference between two elements is greater than 1 you cannot remove them
                flag = false;
                printf("NO\n");
                break;
            }
        }
        if (flag) {
            printf("YES\n");
        }
    }
return 0;
}
