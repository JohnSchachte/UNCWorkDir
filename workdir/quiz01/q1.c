#include <stdlib.h>
#include <stdio.h>

int main() {
	int x = 4;
	double arr[7] = {9,8,7,6,5,4,3};
	double* p = &arr[2];
	
	*(p+1) = 0;
	for(int i=0;i<7;i++){
		printf("%f, ",arr[i]);
	}
	printf("\n");
	arr[3] = 1;
	for(int i=0;i<7;i++){
		printf("%f, ",arr[i]);
	}
	printf("\n");
	p--;
	p[x] = x + 1;
	*(p+x+1) = -3;
	
	for(int i=0;i<7;i++){
		printf("%f, ",arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
