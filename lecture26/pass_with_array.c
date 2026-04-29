#include <stdio.h>

void touch_array(char str[10]) {
    str[0]++;
}

int main(void) {
    char str[10] = "hello!";
    printf("%s\n", str);
    touch_array(str);
    printf("%s\n", str);
}
