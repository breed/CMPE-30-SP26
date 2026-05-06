#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_num(void) {
    int n;
    if (scanf("%d", &n)) return n;
    return 0;
}

int main(void) {
    int *nums = calloc(sizeof(*nums), 3);
    char *str = strdup("hello");
    printf("nums is at %p str is at %p and is %s\n", nums, str, str);
    int count = 0;
    int n;
    while (n = get_num()) {
        nums[count++] = n;
    }
    printf("nums is at %p count is %d string is %s\n", nums, count, str);
    for(int i = 0; i < count; i++) {
        printf("%d ", nums[i]);
    }
}
