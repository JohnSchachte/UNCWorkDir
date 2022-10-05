// PID: 730531580
// I pledge the COMP 211 honor code.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	
	long MAX = 32767;	
	
	int isPositive = (argv[1][0] == '-') ? 1 : 0;
	int sizeOfResult = 16;
	int result[16] = {0};
	
	result[sizeOfResult-1] = isPositive;
	
	int num = atoi(argv[1]);
	
	num = (num < 0) ? num * -1 : num; 
	if(num > MAX){
		printf("The signed 16-bit representation of %s is: not possible.",argv[1]);
		return EXIT_SUCCESS;
	}
	int i = 0;
	while(num > 0){
		result[i] = num % 2;		
		num = num / 2;
		i++;
	}
	printf("The signed 16-bit representation of %s is: ",argv[1]);
	for(int j=sizeOfResult-1;j>-1;j--){
		printf("%d",result[j]);	
	}
	printf(".");	
	return EXIT_SUCCESS;	
}
