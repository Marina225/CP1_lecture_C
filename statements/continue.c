#include<stdio.h>

int main(){
for (int i=1; i<6; i++){
	if(i==3)
	{
	break;
	//continue;
	printf("skipping %i\n", i);
	//continue;
}
printf("%i\n", i);
}
return 0;
}
