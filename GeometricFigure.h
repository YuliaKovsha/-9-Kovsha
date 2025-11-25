#pragma once
#include <iostream>
using namespace std;

class GeometricFigure {
protected:
    double x, y;       // координати центру
    double angle;      // кут повороту
    double scale;      // масштаб

public:
    GeometricFigure(double x = 0, double y = 0, double angle = 0, double scale = 1)
        : x(x), y(y), angle(angle), scale(scale) {
    }

    virtual void show() = 0;
    virtual void hide() = 0;
    virtual void rotate(double a) = 0;
    virtual void move(double dx, double dy) = 0;

    virtual ~GeometricFigure() {}
};
