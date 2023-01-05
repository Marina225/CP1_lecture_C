#include<stdio.h>
#include<string.h>

int main(){
char string[100];
int max_len=0;

// xyzyxzyzz

    printf("Type in string: \n");
    scanf("%s", string);

    for (int zacetek=0; zacetek<strlen(string)-1; zacetek++){
        int flag_max_len = 0;
        for (int konec=zacetek+1;konec<strlen(string);konec++) {
            for (int i = zacetek; i < konec; i++) {
                if (string[konec] == string[i]) {
                    if ((konec - zacetek) > max_len) {
                        max_len = konec - zacetek;
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
