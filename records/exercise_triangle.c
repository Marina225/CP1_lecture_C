#include<stdio.h>

struct trig
{
	int a;
	int b;
	int c;
	char color;
};

int main(){

	struct trig Tri;
	printf("Enter the three sides of the Triangle\n");
	scanf("%d",&Tri.a);
	scanf("%d",&Tri.b);
	scanf("%d",&Tri.c);
	printf("Enter the color of the Triangle\n");
	scanf("%s",&Tri.color);
	
	if (Tri.a==Tri.b && Tri.c == Tri.a){

		printf("Triangle is equilateral\n");
	}


	printf("Triangle is not equilateral\n");
}