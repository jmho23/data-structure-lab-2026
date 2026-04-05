#include "Car.h"

int main() {
    Car c(60, "Car", 3);

    c.display();
    c.speedUp();
    c.changeGear();
    c.display();
    c.whereAmI();

    return 0;
}