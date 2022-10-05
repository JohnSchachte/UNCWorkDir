#include <stdio.h>
#include <stdlib.h>

int main() {
for (int i=0;i<100;i++){
	if (i%3 ==0){
		printf("%d\n",i);
	}
}
printf("first loop ended");

for (int i=0; i<100; i+=3) { printf("%d\n", i); }
return EXIT_SUCCESS;
}
