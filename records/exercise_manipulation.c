#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 100
#define MAX_SUBJECTS 10
#define MAX_STUDENTS 20

/*
Create a collection of students storing structures student that store the following data: (student number, name of student, marks).
Declare a structure variable of student provide methods to input data in data member and to display structure student.
Sort the students based on their id descending order.
Retrieve the name of the best student. (by average grade)
 */

typedef struct Student
{
    int uid;
    char name[MAX_SIZE];
    double marks[MAX_SIZE];
} Student;

//constructor method
Student* student_new(int uid, char name[], double marks[]){
    Student* self = malloc(sizeof(Student));
    self->uid=uid;
    strcpy(self->name, name);
    for (int i=0; i<MAX_SUBJECTS;i++){
        self->marks[i]=marks[i];
    }
    return self;
}

//printf method
void student_print(Student* self, int marks_n){
    printf("name='%s', ",self->name);
    printf("uid=%i, ",self->uid);
    for (int i = 0; i < marks_n; ++i) {
        printf("%f ", self->marks[i]);
    }
    printf("\n");
}

//SORT ID method
void student_sort_uid(Student* students[], int student_num){
    for (int i = 0; i < student_num; ++i) {
        for (int j = 0; j < student_num-1; ++j) {
            Student* t=students[j];
            Student* n=students[j+1];
            if(n->uid < t->uid){
                students[j]=n;
                students[j+1]=t;
            }
        }
    }
}

//  get AVG grade of student method
float student_avg_grade(Student* student){
    float sum=0.0f;
    int i;
    for (i = 0; i < MAX_SUBJECTS; ++i) {
        if(!student->marks[i])
            break;
        sum=sum+(student->marks[i]);
    }
    return sum/i;
}

//sort student by AVG grade method
void student_sort_avg_grade(Student* students[], int student_num){
    for (int i = 0; i < student_num; ++i) {
        for (int j = 0; j < student_num-1; ++j) {
            Student* t=students[j];
            Student* n=students[j+1];
            if(student_avg_grade(n) > student_avg_grade(t)){
                students[j]=n;
                students[j+1]=t;
            }
        }
    }
}


//BEST student method
Student* student_with_max_grade2(Student* students[], int student_n){
    Student* best=students[0];
    for (int i = 0; i < student_n; i++)
    {    
        if(student_avg_grade(students[i])>student_avg_grade(best)){
            best=students[i];
        }
    }
    return best;
}

Student student_with_max_grade2(Student students[], int student_n){
    Student best=students[0];
    for (int i = 0; i < student_n; i++)
    {    
        if(student_avg_grade(&students[i])>student_avg_grade(&best)){
            best=students[i];
        }
    }
    return best;
}


int main()
{
    //storing structs/records together
    //creating list of pointer to structures
    Student* arr[MAX_STUDENTS]; //pointer to this array

    int student_num, mark_n;
    printf("Number of students: ");
    scanf("%i", &student_num);
    printf("num of marks for students: ");
    scanf("%i", &mark_n);
    for (int i = 0; i < student_num; ++i) {
        int uid;
        char name[MAX_SIZE];
        double marks[MAX_SUBJECTS];
        for (int i=0; i<MAX_SUBJECTS;i++){
            marks[i]=0;
        }
        printf("student id: ");
        scanf("%i", &uid);
        printf("student name: ");
        scanf("%s", name);
        for (int j = 0; j < mark_n; ++j) {
            scanf("%lf", &marks[j]);  // == marks+j
        }
        arr[i]=student_new(uid, name, marks);
    }

    for (int i = 0; i < student_num; ++i) {
        student_print(arr[i], mark_n);
    }

    //sort by id
    student_sort_uid(arr, student_num);

    printf("Sorted by uid:\n");
        for (int i = 0; i < student_num; ++i) {
            student_print(arr[i], mark_n);
   }

    //best student NAME
    Student* best=student_with_max_grade2(arr, student_num);
    printf("best student is: %s\n", best->name);

    
    return 0;
}
