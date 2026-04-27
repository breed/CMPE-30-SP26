#include <ctype.h>
#include <stdio.h>

void dump_mem(void *vptr) {
    char *ptr = vptr;

    printf("dumping memory at %p\n", ptr);

    for (int i = 0; i < 32; i++) {
        printf("%02X ", ptr[i] & 0xff);
    }
    printf("\n");
    for (int i = 0; i < 32; i++) {
        if (isalnum(ptr[i])) {
            printf("%c  ", ptr[i]);
        } else {
            printf("   ");
        }
    }
    printf("\n");
}

int main() {
    int i = 2;
    char s[] = "hello!";
    struct {
        char c;
        short s;
        char str[5];
    } stru = { 'a', 3, "hi" };

    dump_mem(&i);
}
