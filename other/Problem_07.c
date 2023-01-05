#include<stdio.h>

int main(){
    int A[100000];
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        //sort(A, n, false);
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

        int num = 0;
        int need = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            need = need > A[i] ? need : A[i];
            num++;
            if (num == need) {
                need = num = 0;
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}
