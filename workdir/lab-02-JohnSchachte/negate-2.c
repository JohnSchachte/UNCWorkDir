// PID: 730531580
// I pledge the COMP 211 honor code.

#include <stdio.h>
#include <stdlib.h>

void doCompliment(char* pointer,int size){
	for(int j=size-1;j>-1;j--){
		pointer[j] = pointer[j] == '1' ? '0' : '1';
	}
	int i = size-1;
	do{	
		pointer[i] = pointer[i] == '1' ? '0' : '1';
		i--;
	}while(pointer[i-1] == 0 && i > -1);
}

int main(int argc, char* argv[]){
	printf("The negation of the 32-bit two's complement integer %s is:",argv[1]);	
	int size = 32;
	doCompliment(argv[1],size);
	printf(" %s.",argv[1]);

	return EXIT_SUCCESS;
}
