// PID: 730531580
// I pledge the COMP 211 honor code.

#include <stdio.h>

int formatOutput(int indexes[],int size){

	printf("Offending lines:");
	for(int i = 0; i < size; i++){
		printf(" %d,", indexes[i]);
	}
	return 0;
}

int main(){
	char c;
	int linecounter = 0; //starts at line 0
	int linelen = 0; //counter that counts the line's char length

	int overfifty = 0;
	int MAXILLEGAL = 100;
	int illegalindexes[MAXILLEGAL];

	int outputcounter = 0;

	while((c = getchar()) != EOF){
		
		if(c=='\n'){
			if(linelen > 50){
				illegalindexes[overfifty] = linecounter;
				overfifty++; //linelen was over fifty with out a line break
			}
			linecounter++; //newline was seen so iterate up 1 line
			linelen = 0;
			outputcounter = 0;
		}
		putchar(c);
		printf("c = %c and output = %d \n", c,outputcounter);
		if(outputcounter == 50){
			printf("putting '\n' on when outcounter = %d \n",outputcounter);
			putchar('\n');

			outputcounter = 0;
		}
		linelen ++;
		outputcounter ++;
	}
printf("\nTotal lines over 50 chars: %d\n",overfifty);
formatOutput(illegalindexes,overfifty);
printf(" \n");
return 0;
}
