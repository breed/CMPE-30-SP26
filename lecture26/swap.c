#include <stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int main(void) {
    int a = 1;
    int b = 2;
    printf("a = %d b = %d\n", a, b);
    swap(a, b);
    printf("a = %d b = %d\n", a, b);
}
