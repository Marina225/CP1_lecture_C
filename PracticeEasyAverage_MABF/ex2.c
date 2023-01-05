#include<stdio.h>

int main(){
        char sInput[20];

        printf("\nPlease enter a word max 20 characters: ");
//        scanf("%s", sInput);
        fgets(sInput, 20, stdin);
        for( int c=0; c < 20; c++  ){
                switch( sInput[c] ){
                        case 'a': 
                                sInput[c] = '5';
                                break;
                        case 'e':
                        case 'i':
                                sInput[c] = 'X';
                                break;
                        case 'o':
                        case 'u':
                                sInput[c] = 'Q';
                                break;
                        default: 
                                break; 
                }
        }
        printf("\n\nThe new string has been encrypted. ");
        printf("\nYour string is now %s.\n", sInput);
        return 0; 
}
