#pragma once
#include "GeometricFigure.h"

class RectangleFigure : public GeometricFigure {
private:
    double width;
    double height;

public:
    RectangleFigure(double x, double y, double angle, double scale,
        double width, double height)
        : GeometricFigure(x, y, angle, scale),
        width(width), height(height) {
    }

    void show() override;
    void hide() override;
    void rotate(double a) override;
    void move(double dx, double dy) override;
};
