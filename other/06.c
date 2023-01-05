#include<stdio.h>

int main(){
    int t, i, j, m, n, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int r, mx = 0, s = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &r);
            s = s + r;
            mx = mx > s ? mx : s;
        }
        scanf("%d", &m);
        int b, mx2 = 0;
        s = 0;
        for (i = 0; i < m; i++) {
            scanf("%d", &b);
            s = s + b;
            mx2 = mx2 > s ? mx2 : s;
        }
        printf("%i\n", mx + mx2);
    }

}
