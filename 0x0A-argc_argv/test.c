#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, j;
    int add = 0;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++) {
        for (j = 0; argv[i][j]; j++) {
            if (argv[i][j] < '0' || argv[i][j] > '9') {
                printf("Error\n");
                return 1;
            }
        }
        add += atoi(argv[i]);
    }
    printf("%d\n", add);

    return 0;
}

