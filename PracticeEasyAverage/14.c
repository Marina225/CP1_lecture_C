#include<stdio.h>
#include<string.h>

int main(){
char string[100];
int max_len=0;

// xyzyxzyzz

    printf("Type in string: \n");
    scanf("%s", string);

    for (int start=0; start<strlen(string)-1; start++){
        int flag_max_len = 0;

        for (int end=start+1;end<strlen(string);end++) {
            for (int i = start; i < end; i++) {
                if (string[end] == string[i]) {
                    if ((end - start) > max_len) {
                        max_len = end - start;
                    }
                flag_max_len = 1;
                break;
                }
            }

            if (flag_max_len==1)
                break;
        }
    }
printf("%i\n", max_len);

return 0;
}
