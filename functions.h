#ifndef FUNCTIONS_H
#define FUNCTIONS_H

double f1(double x);
double f2(double x);
double f3(double x);
double f4(double x);

double trapezoid(double (*f)(double), double a, double b, int n);
double compute_integral(double (*f)(double), double a, double b, double eps);

#endif 
