#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    double a = 0.0;
    double b = 1.0;
    char *end;
    double eps = strtod(argv[1], &end);

    if (*end != '\0') {
        return 1;
    }

    printf("%f\n", compute_integral(f1, a, b, eps));
    printf("%f\n", compute_integral(f2, a, b, eps));
    printf("%f\n", compute_integral(f3, a, b, eps));
    printf("%f\n", compute_integral(f4, a, b, eps));

    return 0;
}
