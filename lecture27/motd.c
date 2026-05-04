#include <stdio.h>
#include <string.h>

char *motd(char *name) {
    char *prefix = "hello ";
    char message[70];
    strcpy(message, prefix);
    strcat(message, name);
    return message;
}

int main(int argc, char **argv) {
    char *message = motd(argv[1]);
    printf("%s\n", message);
}
