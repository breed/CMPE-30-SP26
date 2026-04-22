#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("USAGE: %s filename dim\n", argv[0]);
        return 1;
    }
    int dim = strtol(argv[2], NULL, 10);
    if (dim < 1 || dim > 10) {
        fprintf(stderr, "%s is not between 1 and 10\n", argv[2]);
        return 2;
    }
    FILE *fh = fopen(argv[1], "w");
    if (fh == NULL) {
        perror(argv[1]);
        return 2;
    }
    // write the dimension
    fwrite(&dim, sizeof dim, 1, fh);
    for (int row = 0; row < dim; row++) {
        char str[11];
        if (scanf("%10s", str) != 1) {
            fprintf(stderr, "Did not read row\n");
            return 3;
        }
        printf("read a line\n");
        fwrite(str, dim, 1, fh);
    }
}
