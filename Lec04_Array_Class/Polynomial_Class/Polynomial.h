#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

#define MAX_DEGREE 80

class Polynomial {
    int degree;
    float coef[MAX_DEGREE];

public:
    Polynomial();
    void read();
    void display(const char* str = "Poly = ");
};

#endif