#include<stdio.h>

int main(){

    const int maxn = 1000005;
    int n;
    int a[maxn];
    scanf("%i", &n);//aks for the n which is the number of flats in the house
    for (int i = 1; i <= n; i++) {
        int num;
        scanf("%i", &num);//ask for the state of the light 0 or 1
        a[i] = num;
    }
    int k = 0;
    //QUESTION: what is the minimum numer of lights that need to be turned of so nobody would be distrubed
    for (int i = 2; i < n; i++) { //first one is never disturbed so we skip it
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {//walk then through the first example
            k++;
            a[i + 1] = 0;
        }
    }
    printf("%d\n", k);


return 0;
}
