#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr[7] = {1,2,3,4,5,6,7};
	int* p = &arr[3];
	printf("%d",p[3]);
	return 0;
}
