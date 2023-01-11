#include<stdio.h>
#include <string.h>

struct Book
{
	int pages;
	char title[50];
	char author[50];
	float rating;
};

struct Library{

	char name[50];	
	int number_of_Books;
	struct Book catalog[50];

};


int main(){

	struct Library Lib1;

	strcpy(Lib1.name,"Library of CP1");

	Lib1.number_of_Books=3;

	Lib1.catalog[0].pages=30;
	strcpy(Lib1.catalog[0].title,"Something...");

	Lib1.catalog[1].pages=3000;
	strcpy(Lib1.catalog[1].title,"Dictonary");

	Lib1.catalog[2].pages=300;
	strcpy(Lib1.catalog[2].title,"Spartans");


	for (int i;i<Lib1.number_of_Books;i++){

		printf("%s , Pages:%d \n",Lib1.catalog[i].title, Lib1.catalog[i].pages);

	}

}