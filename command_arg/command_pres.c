#include <stdio.h>

void print_arg(int argc, char* argv[]){
	        for(int i=0; i<argc; i++){
                printf("%s\n", argv[i]);
        }

}

int main(int argc, char* argv[]){

	printf("number of arguments is: %i \n", argc);
	print_arg(argc, argv);

	/*
	for(int i=0; i<argc; i++){
		printf("%s\n", argv[i]);
	}*/



return 0;
}
