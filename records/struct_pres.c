#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

/*records of students

student:
age
name

concepts
methods to manipulate and include concepts

define construct
intialize
populate
access the elements - print elements

*/


//DEFINE
/* tow ways: with alias or without*/

/*struct Student{
    int age;
    char name[MAX_SIZE];
};

struct Student; 
*/

typedef struct Student{
    int age;
    char name[MAX_SIZE];
} Student;


//METHODS:
//construction method
//reference
Student* new_student_ref(int age, char name[]){
    Student* self=malloc(sizeof(Student));
    self->age=age;
    //do not tdo this: self->name=name!!
    strcpy(self->name, name);
    return self;
}

//value
Student new_student_val(int age, char name[]){
    Student self;
    self.age=age;
    strcpy(self.name,name);

    return self;
}


//print method
//reference
void print_student_ref(Student* student){
    printf("age: %i\n", student->age);
    printf("name %s\n", student->name);
}


//value
void print_student_val(Student student){
    printf("age: %i\n", student.age);
    printf("name: %s\n", student.name);
}



// INITIALIZE
int main(){

    //as value
    Student student1={19, "Mama"};
    Student student2;    
    
    //as pointer
    Student* stundent_p=malloc(sizeof(Student));
    Student* student1_p=&student1;
    Student* student2_p;

    //with method:
    Student* student10=new_student_ref(18, "Marina");
    Student student11=new_student_val(20, "MArko");
    
    //access elements   
    printf("%s\n", student1_p->name); //access with reference
    printf("%s\n", student1.name); //access with value


    //with method
    print_student_ref(student10);
    print_student_val(student11);


    //ARRAYS: - now that we have methods it is easy to expand to muliple elements of an array
    Student students[10];
    for (int i = 0; i < 2; i++)
    {
        char name[MAX_SIZE];
        int age;
        printf("student name: ");
        fgets(name, MAX_SIZE, stdin);
        printf("student age: ");
        scanf("%i", &age);
        students[i]=new_student_val(age, name);
    }

    for (int i = 0; i < 2; i++)
    {
        print_student_ref(&students[i]);
    }
    
    

    return 0;
}

