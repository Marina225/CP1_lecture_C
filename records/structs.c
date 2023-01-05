#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 1000

//CONCEPTS
//PROGRAMMING WITH MEHODS

//records
/* student
age
name
surname
*/

//initialize the record
/* two ways to initilize
with alias or without alias*/

typedef struct Student{
    int age;
    char name[MAX_NAME];
    char surname[MAX_NAME];
    } Student;


/*struct Student{
    int age;
    char name[MAX_NAME];
    char surname[MAX_NAME];
};

struct Student;*/

/*METHODS:
    - construction method via reference and value
    - print method via referecne and value 
*/

//step 3
//CONSTRUCTION  METHOD
//pass by reference
Student* new_student(int age, char name[], char surname[]){
    Student* self=malloc(sizeof(Student));
    self->age=age;
    strcpy(self->name,name);
    strcpy(self->surname, surname);
    return self;
}

//pass by value
Student new_student_Val(int age, char name[], char surname[]){
    Student self;
    self.age=age;
    strcpy(self.name, name);
    strcpy(self.surname, surname);
    return self;
}

//PRINT METHODS
//reference
void print_student_ref(Student* student){
    printf("age: %i\n", student->age);
    printf("name %s\n", student->name);
    printf("surname %s\n", student->surname);
}


//value
void print_student_val(Student student){
    printf("age: %i\n", student.age);
    printf("name: %s\n", student.name);
    printf("surname: %s\n", student.surname);
}

int main(){

//STep 2
// INITIALISATION
// as values
// as pointers

//as values:
Student student1;
Student student2={};
Student student3={.age=19, .name="Mar", .surname="He"};
Student student4={19, "marina", "Pal"};

//as pointers
Student* student_p1;
Student* student_p=malloc(sizeof(Student));
Student* student_p4=&student4;

//accesing the elements
printf("%s\n", student3.name);
printf("%s\n", student_p4->name);

//thourgh a method
// pass by reference
Student* new_s_p=new_student(19, "Hana", "Kar");
// pass by value
Student new_s2=new_student_Val(20, "Maja", "Kane");

//access the elements
print_student_ref(new_s_p);
print_student_val(new_s2);

print_student_ref(&new_s2);
print_student_val(*new_s_p);


//ARRAY
Student students[3];



return 0;
}

