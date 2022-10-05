#include <stdlib.h>
#include <stdio.h>

typedef struct {
	double length;
	double width;
	double height;
} box;

int main() {
	box* p = (box*) malloc( sizeof(box) );
	printf("size of box = %ld\n",sizeof(box));
	p->length = 5;
	p->width = 7;
	p->height =2;
	
	box myBox = *p;
	printf("%f\n", myBox.length * myBox.height);

	free(p);
	return EXIT_SUCCESS;
}
