#include <iostream>

#include "precision.hpp"
#include "Vector2.hpp"
#include "Panel.hpp"

using namespace Airfoilspace;

int main(int i, char *arg[])
{
    Vector2 A = Vector2(30, 25);
    Vector2 B = Vector2(-40, 45);
    real c = A.productoPunto(B);

    std::cout<<A.x<<" "<<c<<std::endl;

    Panel P1 = Panel(A,B);

    std::cout<<P1.GetPuntoI().x<<std::endl;

    return 0;
}
