#include<stdio.h>

int main(){
    int t, i, j, m, n, k;
    //input of test cases
    scanf("%d", &t);
    while (t--) { //loop to process all test cases
        scanf("%d", &n);   // number of red elements
        int r, mx = 0, s = 0; //mx is maximum possible value, r will be a temp variable for red elements, s will be sum of red elements
        for (i = 0; i < n; i++) {
            //values of red elelements  (could be extneded to check for the inptu validation of  being between -100 and 100)
            scanf("%d", &r);
            s = s + r;
            //choose the maximum - obtaining the absolute sum/comparison
            if(mx > s){
                mx=mx;
            }
            else
                mx=s;
        }

        //the same process is repeated for blue elements.
        scanf("%d", &m);
        int b, mx2 = 0;
        s = 0;
        for (i = 0; i < m; i++) {
            scanf("%d", &b);
            s = s + b;
            if(mx2 > s){
                mx2=mx2;
            }
            else
                mx2=s;
        }

        //for end result we sum together both maximums (for red and and blue elements) 
        printf("%i\n", mx + mx2);
    }

}
