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
	char nextchar;
	int linecounter = 0; //starts at line 0
	int linelen = 1; //counter that counts the line's char length

	int overfifty = 0;
	int MAXILLEGAL = 100;
	int ALLOWEDLENGTH = 50;
	int illegalindexes[MAXILLEGAL];

	int outputcounter = 1; //counter to see where newlines are being placed
	int placednewline = 0; //a flag that points out when a newline was inserted

	

	while((c = getchar()) != EOF){
		
		if(c=='\n'){
			if (linelen > ALLOWEDLENGTH){
				illegalindexes[overfifty] = linecounter;
				overfifty++; //linelen was over fifty with out a line break
			}
				linecounter++; //newline was seen so iterate up 1 line
				linelen = 0;
				outputcounter = 0;
		}

		putchar(c);
		if(outputcounter == ALLOWEDLENGTH){
			nextchar = getchar();
			if(nextchar != '\n'){
				ungetc(nextchar,stdin);
			}else {
				linecounter++;
				linelen=0;
			}
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
