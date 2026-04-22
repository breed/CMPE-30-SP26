#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("USAGE: %s filename\n", argv[0]);
        return 1;
    }
    FILE *fh = fopen(argv[1], "r");
    if (fh == NULL) {
        perror(argv[1]);
        return 2;
    }
    // we are going to read the size of the square
    int dim;
    if (fread(&dim, sizeof dim, 1, fh) != 1) {
        perror(argv[1]);
        return 3;
    }
    if (dim < 1 || dim > 10) {
        fprintf(stderr, "%d not between 1 and 10\n", dim);
        return 3;
    }
    char square[dim][dim];
    if (fread(square, sizeof square, 1, fh) != 1) {
        perror(argv[1]);
        return 3;
    }
    for (int row = 0; row < dim; row++) {
        for (int col = 0; col < dim; col++) {
            printf("%c", square[row][col]);
        }
        printf("\n");
    }
}
