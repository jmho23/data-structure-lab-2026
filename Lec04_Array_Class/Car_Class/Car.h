#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
protected:
    int speed;
    char name[40];

public:
    int gear;

    Car();
    ~Car();

    Car(int s, const char* n, int g);

    void changeGear(int g = 4);
    void speedUp();
    void display();
    void whereAmI();
};

#endif
