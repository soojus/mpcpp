#include "Box.h"
#include <iostream>
using namespace std;

Box::Box(int width, int height) { setSize(width, height); fill = '*';}
Box::~Box() {}
void Box::setSize(int width, int height) { this->width = width; this->height = height; }
void Box::setFill(char fill) { this->fill = fill; }
void Box::draw() {
    for(int n = 0; n < height; n++) {
        for(int m = 0; m < width; m++) cout << fill;
        cout << endl;
    }
}