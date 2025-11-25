#include "RectangleFigure.h"
#include <iostream>
#include <cmath>

void RectangleFigure::show() {
    cout << "Прямокутник: центр(" << x << ", " << y
        << "), ширина=" << width * scale
        << ", висота=" << height * scale
        << ", кут=" << angle << "°" << endl;
}

void RectangleFigure::hide() {
    cout << "Прямокутник приховано." << endl;
}

void RectangleFigure::rotate(double a) {
    angle += a;
    angle = fmod(angle, 360.0);
    if (angle < 0) angle += 360;
    cout << "Новий кут: " << angle << "°" << endl;
}

void RectangleFigure::move(double dx, double dy) {
    x += dx;
    y += dy;
    cout << "Нові координати: (" << x << ", " << y << ")" << endl;
}
