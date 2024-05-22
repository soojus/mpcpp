#include "Circle.h"

Circle::Circle() {
    radius = 1;
}

Circle::Circle(int r) {
    radius = r; 
}
int Circle::getRadius(int r) {
    radius = r;
    return radius;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}       