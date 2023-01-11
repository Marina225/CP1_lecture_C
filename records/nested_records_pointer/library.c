#include<stdio.h>
#include <string.h>

struct Book
{
	int pages;
	char title[50];
	char author[50];
	float rating;
};

struct Person{

	char person_name[50];	
	struct Book* book_borrowed;
};

struct Library{

	char name[50];	
	int number_of_Books;
	struct Book* catalog[10];
};

//method:

struct Person person_new(char name[], struct Book* book){
	struct Person self;
	strcpy(self.person_name, name);
	self.book_borrowed=&book;
	return self;
}

void print_person(struct Person person){
	pritnf("Name: %s ", person.person_name);
	printf("Book title: %s", person.book_borrowed->title);
	printf("\n");
}

int main(){


	//conencting person to a book:
	struct Person p1={"Marina"};
	struct Book b1={150, "Something", "Me", 4.75};
	
	//assigning the pointer:
	p1.book_borrowed=&b1;

	//accessign the title of the book borrowed:
	p1.book_borrowed->title;

	//printing the information of the member:
	print_person(p1);

//////////////////////////////////////////////////////
	//creating a librabry collection
	struct Library Lib1;

	strcpy(Lib1.name,"Library of CP1");

	Lib1.number_of_Books=3;

	Lib1.catalog[0]->pages=30;
	strcpy(Lib1.catalog[0]->title,"Something...");

	Lib1.catalog[1]->pages=3000;
	strcpy(Lib1.catalog[1]->title,"Dictonary");

	Lib1.catalog[2]->pages=300;
	strcpy(Lib1.catalog[2]->title,"Spartans");


	for (int i;i<Lib1.number_of_Books;i++){

		printf("%s , Pages:%d \n",Lib1.catalog[i]->title,Lib1.catalog[i]->pages);

	}

}