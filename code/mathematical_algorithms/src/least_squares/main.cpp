#include <iostream>
#include <array>
#include "least_squares.h"

int main()
{
    matrix<3, 3> x{{0,1,2}};
    matrix<3, 4> y{{0,1,2,3}};

    matrix<3, 4> a = least_squares(x, y);

    return 0;
}