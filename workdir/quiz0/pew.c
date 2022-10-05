#include <stdio.h>

typedef struct {
    int field_1;
    int field_2;
} brent;

int main() {

    brent var;
    var.field_1 = 10;
    var.field_2 = 20;

    printf("%d\n",(var.field_1 + var.field_2)/2);
    return 0;
}
