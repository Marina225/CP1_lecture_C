#include<stdio.h>

void main() {
    int n, an;
    int a[10000];
    int t, i, j;
    

    printf("Enter t: ");    
    scanf("%i", &t);

    while(t--) {
        int flag = 1;


        printf("Enter n: ");
        scanf("%i", &n);

        int a[n];
        for (i = 0; i < n; i++) {
            printf("Enter a[i]: ");
            scanf("%i", &a[i]);
        }

        
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                int c = a[j];
                int b = a[j + 1];
                if (b < c) {
                    a[j] = b;
                    a[j + 1] = c;
                }
            } 
        }

        for (i = 0; i < n; i++) {
            
            if (a[i] - a[i - 1] > 1) {
                printf("No \n");
                flag = 0;
                break;
            } 

            }
        if (flag == 1){
            printf("Yes \n");
        }
   

     
     }
    

    
    

}