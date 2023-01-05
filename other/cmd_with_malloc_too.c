#include<stdio.h>
#include <string.h>

//command line arguments example
int main(int argc, char *argv[]){

int b=argc;
printf("argumens: %i \n ",b);

for(int i=0; i<argc; i++){
 printf("Argument %i with value: %s \n", i, argv[i]);
 //strcpy(arguments[i], argv[i]);

// default storage to a certain ammount
char a[100];
strcpy(a, argv[i]);

///dynamic storage:
/*
char *mapping = malloc(strlen(argv[i]) + 1); //strlen returns the size of the string not including the null character at the end.
strcpy(mapping,argv[i]);
...
free(mapping);//then you will have to free the allocated space when you are done with it.
*/

printf("%s \n", a);
}

printf("\n");

return 0;

}
