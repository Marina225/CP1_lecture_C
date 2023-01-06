#include<stdio.h>
#include<string.h>
#define MAX_LEN 1000

typedef struct Car{
    char brand[MAX_LEN];
    char model[MAX_LEN];
    int year;
    } Car;

//cosntuctor method:
Car new_car(char brand[], char model[], int year){
    Car self;
    strcpy(self.model, model);
    strcpy(self.brand, brand);
    self.year=year;

    return self;
}

//print method
void print_car(Car car){
    printf("%s ", car.brand);
    printf("%s ", car.model);
    printf("%d ", car.year);
}

int main(){
    int size;
    printf("enter the number of cars: ");
    scanf("%i", &size);
    
    Car cars[size];
    for (int i = 0; i < size; i++)
    {
        //get values
        char brand[MAX_LEN];
        char model[MAX_LEN];
        int year;
        printf(" brand: ");
        scanf("%s", brand);
        printf("model: ");
        scanf("%s", model);
        printf("year: ");
        scanf("%i", &year);
        //create
        cars[i]=new_car(brand, model, year);
    }
    
    for (int i = 0; i < size; i++)
    {   
        printf("cars are:");
        print_car(cars[i]);
        printf("\n");
    }
    
    

    return 0;
}