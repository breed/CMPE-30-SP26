#include <stdio.h>

int main() {
    char *greeting = "hello";
    char greet2[] = "hello";
    char *ptr = greeting;
    char *ptr2 = greet2;
    printf("%s %s %s %s\n", greeting, greet2, ptr, ptr2);
    printf("%p %p %p %p\n", greeting, greet2, ptr, ptr2);
}
