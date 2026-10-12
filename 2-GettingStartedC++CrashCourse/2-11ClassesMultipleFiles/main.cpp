#include <iostream>
#include "rectangle.h"
#include "box.h"

int main()
{
    Rectangle r(10,20);
    std::cout << "area : " << r.get_area() << std::endl;

    Box b(10,20,30);
    std::cout << "volume : " << b.get_volume() << std::endl;
    return 0;
}