#include "RectangleFigure.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    RectangleFigure r(0, 0, 0, 1, 4, 2);

    r.show();
    r.move(5, 3);
    r.rotate(45);
    r.show();
    r.hide();

    return 0;
}
