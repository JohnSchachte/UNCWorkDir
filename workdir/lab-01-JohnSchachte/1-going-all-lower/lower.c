// PID: 730531580
// I pledge the COMP 211 honor code.

#include <stdio.h>
# include <stdlib.h>

int main(){
	char c;
	
	while((c = getchar()) != EOF){
		if(c >= 'A' && c <= 'Z'){
			c = c + 32;
		}
 		putchar(c);	
	}
	return EXIT_SUCCESS;
}
