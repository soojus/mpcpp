#pragma once
class Box {
private:
    int width, height;
    char fill;
public:
    Box(int width, int height);
    ~Box();
    void setFill(char f);
    void setSize(int width, int height);
    void draw();
};