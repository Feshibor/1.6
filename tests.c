#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

#define EPS 1e-6

void test_f1() {
    double result = compute_integral(f1, 0.0, 1.0, EPS);
    double expected = 0.8224670334241132; 
    if (fabs(result - expected) < EPS) {
        printf("f1 test passed: %.12f\n", result);
    } else {
        printf("f1 test FAILED: %.12f (expected %.12f)\n", result, expected);
    }
}

void test_f2() {
    double result = compute_integral(f2, 0.0, 1.0, EPS);
    double expected = 0.8556243919; 
    if (fabs(result - expected) < EPS) {
        printf("f2 test passed: %.12f\n", result);
    } else {
        printf("f2 test FAILED: %.12f (expected %.12f)\n", result, expected);
    }
}

void test_f3() {
    double result = compute_integral(f3, 0.0, 1.0, EPS);
    double expected = 1.0; 
    if (fabs(result - expected) < EPS) {
        printf("f3 test passed: %.12f\n", result);
    } else {
        printf("f3 test FAILED: %.12f (expected %.12f)\n", result, expected);
    }
}

void test_f4() {
    double result = compute_integral(f4, 0.0, 1.0, EPS);
    double expected = 0.783430510712; 
    if (fabs(result - expected) < EPS) {
        printf("f4 test passed: %.12f\n", result);
    } else {
        printf("f4 test FAILED: %.12f (expected %.12f)\n", result, expected);
    }
}

int main() {
    printf("Running numeric integration tests with ε = %.1e\n", EPS);
    test_f1();
    test_f2();
    test_f3();
    test_f4();
    printf("All tests completed.\n");
    return 0;
}
