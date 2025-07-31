#include <stdio.h>

void myFunction() {
    static int count = 0;
    count++;
    printf("Function has executed %d times.\n", count);
}

void main() {
    myFunction();
    myFunction();
    myFunction();
}
