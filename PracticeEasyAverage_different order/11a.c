#include <stdio.h>
#include <string.h>

#define MAX_LEN 15

void intToRoman(int num, char* roman)
{
    char* roman_numerals[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    strcpy(roman, "");

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(roman, roman_numerals[i]);
            num -= values[i];
        }
    }
}

int main()
{
    int num;
    char roman[MAX_LEN];

    printf("Enter a number from 0 to 1000: ");
    scanf("%d", &num);

    intToRoman(num, roman);

    printf("Roman numeral: %s\n", roman);

    return 0;
}
