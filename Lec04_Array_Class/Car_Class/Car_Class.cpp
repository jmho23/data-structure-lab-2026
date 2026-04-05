#include "Car.h"
#include <cstdio>
#include <cstring>

Car::Car() {}

Car::~Car() {}

Car::Car(int s, const char* n, int g)
    : speed(s), gear(g) {
    strcpy_s(name, n);
}

void Car::changeGear(int g) {
    gear = g;
}

void Car::speedUp() {
    speed += 5;
}

void Car::display() {
    printf("[%s] : GEAR=%d SPEED=%dkmph\n", name, gear, speed);
}

void Car::whereAmI() {
    printf("Object address = %p\n", this);
}