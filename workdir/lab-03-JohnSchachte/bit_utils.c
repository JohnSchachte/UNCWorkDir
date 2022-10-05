// PID: 730531580
// I pledge the COMP 211 honor code.

#include "bit_utils.h"
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

char *itob(int num, int size){
	int* result = (int*) malloc(sizeof(int) * size);
	int isPositive = (num < 0) ? 1 : 0;
	// result[size-1] = isPositive;
	num = (num < 0) ? num * -1 : num;
	int i = 0;
	while(num > 0){
		result[i] = (num % 2);		
		num = num / 2;
		i++;
	}
	if(isPositive == 1){
		doCompliment(result,size);
	}
	char* string = (char*) malloc(sizeof(char) * size);
	for(int i=size-1;i>-1;i--){
		string[(size-1-i)] = result[i] + '0';
	}
	string[0] = (isPositive == 1) ? '1' : '0';
	return string;
}

int mask_bits(int target, int masker){
	// masks the bits
	return target & masker;
}

int set_bits(int target, int setter){
	//sets bit of target based on setter
	return target | setter;
}

int inverse_bits(int target, int inverser){
	//inverse target based on setter
	return target ^ inverser;
}

int bit_select(int input, int end,int start){
	// return the binary between start and end
	unsigned int target = (unsigned int) input;
	target = target << (32 - end-1);
	target = target >> (32-end-1+start);
	return target;
}
