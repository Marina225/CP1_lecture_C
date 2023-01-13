#include<stdio.h>
#include<string.h>
/*bodybuilder*/

int main(){
    int n;
    printf("number of ex: ");
    scanf("%i", &n);

    int s[n];
    for (int i = 0; i < n; ++i) {
        scanf("%i", &s[i]);
    }

    int body[]={0,0,0};
    for (int i = 0; i < n; ++i) {
        int type=i%3;
        body[type]+=s[i];
    }

    if(body[0]>body[1] && body[0]>body[2]){
        printf("chest\n");
    }
    else if (body[1]>body[0] && body[1]>body[2]){
        printf("biceps\n");
    }
    else
        printf("back\n");

    return 0;
}
