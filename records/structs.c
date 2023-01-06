#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000

/*records of students

student:
id
name

We will do the following:
concepts
methods to manipulate the objects/records, that includes the concepts

Steps to be taken:
define construct
intialize
populate
access the elements - print elements

CREATE METHODS

*/

//STRUCT DEFINIITON -declaration
//with the alias /without alias
/*
struct Student{
    int id;
    char name[MAX_SIZE];
};

struct Student student1;
*/
                //structs Capital first letter
typedef struct Student{
    int id;
    char name[MAX_SIZE];
} Student;

//Student student1;


//constructionm method
//value
Student new_student_val(int id, char name[]){
    Student self;
    self.id=id;
    //self.name=name; DO NOT DO THIS
    strcpy(self.name, name);
    return self;
}

//reference
Student* new_student_ref(int id, char name[]){
    Student* self=malloc(sizeof(Student));
    self->id=id;
    strcpy(self->name,name);
    return self;
}

//Print methods
void print_student_val(Student student){
    printf("%i ", student.id);
    printf("%s", student.name);
}

void print_student_ref(Student* student){
    printf("%i ", student->id);
    printf("%s", student->name);

}

int main(){
    //initialisation
    //variables:
    Student student0;
    Student student1={};
    Student student2={.id=1, .name="Marina"};
    Student student4={2,"Marina2"};

    //pointers
    Student* student_p;
    Student* student_p2=&student2;
    Student* student_p3=malloc(sizeof(Student)); 

    //access
    //*(arr+i)=arr[i]
    printf("%s\n", student2.name); //through value
    printf("%s\n", student_p2->name); //through reference

    //methods:
    Student student5=new_student_val(4,"Jaka");
    Student* student6_p=new_student_ref(5, "Max");

    //print ref
    print_student_ref(student6_p);
    printf("\n");
    print_student_ref(&student5);
    printf("\n");

    //printf value
    print_student_val(*student6_p);
    printf("\n");
    print_student_val(student5);
    printf("\n");


    /*
    arr[i] --> to acces element index i

    Student student2={.id=1, .name="Marina"};
    student2{
        id=1, name="Marina"
    }
    student2.id
    student2.name


    Student* student_p2=&student2;
    student_p2 =0x97845.. address of student2
    
    *(student_p2).name
    student_p2->name
    */

    //ARRAYS
    Student students[3];

    for (int i = 0; i < 3; i++)
    {      
        int id;
        char name[MAX_SIZE];

        printf("id: ");
        scanf("%i", &id);
        printf("name: ");
        scanf("%s", name);
        students[i]=new_student_val(id, name);
    }


    for (int i = 0; i < 3; i++)
    {
        print_student_val(students[i]);
        printf("\n");
        //print_student_ref(&students[i]); 
    }
    



    return 0;
}