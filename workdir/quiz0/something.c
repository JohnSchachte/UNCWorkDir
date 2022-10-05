#include <stdio.h>
#include <stdlib.h>

int x = 10.0;
void main(){
    int a = 3;
    int b = 5;
    int c = 7;
    int d = 11;
    printf("%d\n",(1/(a+b)*c+d));
    printf("%d\n",(1 / a + b * c + d));
    printf("%d\n",(1 / (a+b) * c + d));
    printf("%d\n",(1 / (a+b) * (c + d)));
    printf("%d\n",(c / (a+b) + d));
    printf("%d\n",(1 / a + b * c + d));
}
