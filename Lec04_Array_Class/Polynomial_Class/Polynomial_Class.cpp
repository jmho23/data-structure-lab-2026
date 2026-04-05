#include "Polynomial.h"

// 생성자
Polynomial::Polynomial() {
    degree = 0;
}

// 입력
void Polynomial::read() {
    std::cout << "Enter the highest order of the polynomial: ";
    std::cin >> degree;

    if (degree >= MAX_DEGREE) {
        std::cout << "The order is too large. It's auto-adjusted.\n";
        degree = MAX_DEGREE - 1;
    }

    std::cout << "Enter the coefficients of each term (total " << degree + 1 << "): ";
    for (int i = 0; i <= degree; i++) {
        std::cin >> coef[i];
    }
}

// 출력
void Polynomial::display(const char* str) {
    std::cout << "\t" << str;

    for (int i = 0; i < degree; i++) {
        std::cout << coef[i] << "x^" << (degree - i) << " + ";
    }
    std::cout << coef[degree] << std::endl;
}