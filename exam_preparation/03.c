/*
write a program that converts km/h to m/s for the user and vice versa. The user selects the conversion direction by entering no. 1 or 2. implement functions (toKmh and toMps) for conversion and make use of constants. (1 m/s = 3.6 km/h)

OUTPUT:
Select conversion direction:
1) km/h -> m/s
2) m/s -> km/h
2
Enter the quantity: 1
Kmh: 3.600000
*/


#include<stdio.h>
#define CONVERSION 3.6

double kmTom(int quantity){
    return (double) quantity/CONVERSION;
}

double mTokm(int quantity){
    return (double) quantity*CONVERSION;
}

int main(){
    int selection;
    printf("select conversion direction: \n");
    printf("1) km/h -> m/s\n2) m/s -> km/h\n");
    scanf("%i", &selection);
    float quantity;
    printf("quantity: ");
    scanf("%f", &quantity);

    float res;
    if(selection==1)
        res=kmTom(quantity);
    else if (selection==2)
        res=mTokm(quantity);
    else
        printf("invalid selection\n");
    printf("%f\n", res);
    return 0;
}