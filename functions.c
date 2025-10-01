#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

double f1(double x) {
    if (x == 0.0){
        return 1.0;
    }
    return log(1.0 + x) / x;
}

double f2(double x) {
    return exp(-(x*x)/2.0);
}

double f3(double x) {
    if (x >= 1.0) {
        x = 1.0 - 1e-12;
    }
    return -log(1.0 - x);
}

double f4(double x) {
    if (x == 0.0) {
        return 1.0;
    }
    return pow(x, x);
}

double trapezoid(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return sum * h;
}

double compute_integral(double (*f)(double), double a, double b, double eps) {
    int n = 2;
    double I1 = trapezoid(f, a, b, n);
    double I2;

    while (1) {
        n *= 2;
        I2 = trapezoid(f, a, b, n);
        if (fabs(I2 - I1) < eps) {
            return I2;
        }
        I1 = I2;
    }
}
