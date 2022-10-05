// PID: 730531580
// I pledge the COMP 211 honor code.

#include <stdio.h>
#include <stdlib.h>

void doCompliment(int* pointer,int size){

	for(int j=size-1;j>-1;j--){
		pointer[j] = pointer[j] == 1 ? 0 : 1;
	}
	int CARRY = 1;
	int i = 0;
	do{	
		pointer[i] = CARRY ^ pointer[i];
		i++;
	}while(pointer[i-1] == 0 && i < size);
}

int main(int argc, char *argv[]){
	
	int MAXPOS = 32767;
	int MAXNEG = -32768;
	
	int isPositive = (argv[1][0] == '-') ? 1 : 0;
	int sizeOfResult = 16;
	int result[16] = {0};
	
	int num = atoi(argv[1]);
	if(num > MAXPOS || num < MAXNEG){
		printf("The two's complement 16-bit representation of %s is: not possible.",argv[1]);
		return EXIT_SUCCESS;
	}
	num = (num < 0) ? num * -1 : num;
	
	int i = 0;
	while(num > 0){
		result[i] = num % 2;		
		num = num / 2;
		i++;
	}
	
	if(isPositive == 1){
		doCompliment(result,sizeOfResult);
	}
	
	printf("The two's complement 16-bit representation of %s is: ",argv[1]);
	for(int j=sizeOfResult-1;j>-1;j--){
		printf("%d",result[j]);	
	}
	printf(".");
	return EXIT_SUCCESS;	
}
