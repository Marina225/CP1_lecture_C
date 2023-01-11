/*
LIBRARY INVENTORY:
Define a record for a Book which describes a book by:
    Number of Pages
    Title
    Author.

Using the book record define a record for a library, containing:
    Library name
    Library Location
    Number of books in the library
    A collection of book records, containing the description of the books in the library.

Define a library containing a few books and print the library contents.
*/

#include<stdio.h>
#include<string.h>
//delcare records
typedef struct Book{
    char title[100];
    int pages;
    char author[100];
} Book;

typedef struct Library
{
    char name[100];
    char location[100];
    int num_books;
    Book catalog[50];
} Library;

/*
EXTENSION:
define a struct person;
    name
    book borrowed
*/

typedef struct Person{
    char name[100];
    Book * book_borrowed;
} Person;

typedef struct Person_multi{
    char name[100];
    Book * book_borrowed[50];
} Person_multi;

void print_person(Person person){
    printf("name: %s\n", person.name);
    printf("book borrowed:\n");
    printf("%s %s %i\n", person.book_borrowed->title, person.book_borrowed->author, person.book_borrowed->pages);
}

void print_person2(Person_multi person, int num_books){
    printf("name: %s\n", person.name);
    printf("book borrowed:\n");
    for (int i = 0; i < num_books; i++)
    {
    printf("%s %s %i\n", person.book_borrowed[i]->title, person.book_borrowed[i]->author, person.book_borrowed[i]->pages);
    }
}

Person_multi new_person(char name[], Book books[], int num_books){
    Person_multi self;
    strcpy(self.name, name);
    for (int i = 0; i < num_books; i++)
    {
        self.book_borrowed[i]=&books[i];  //books+i
    }
    
    return self;
}

int main(){

    Library lib;

    strcpy(lib.name, "CP1 library");
    lib.num_books=1;
    strcpy(lib.location, "Rlab1");

    strcpy(lib.catalog[0].title, "programing in C");
    lib.catalog[0].pages=150;

    Library lib2 = {.name="Famnit library", .location="Glagoljaska 8", .num_books=2, 
        .catalog={{.title="C", .author="Lara Lusa", .pages=200}, {.title="C2", .author="Lara Lusa", .pages=203}}};

    printf("inventory:\n");
    for (int i = 0; i < lib2.num_books; i++)
    {
        
        printf("%s, %s, %i\n", lib2.catalog[i].author, lib2.catalog[i].title, lib2.catalog[i].pages);
    }
    

    //defining a person
    Person p1={"Marina", &lib2.catalog[0]};

    print_person(p1);

    Person_multi p2=new_person("Oto", lib2.catalog, 2);

    print_person2(p2, 2);
    return 0;
}

