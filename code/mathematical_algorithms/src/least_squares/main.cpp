#include <iostream>
#include <array>
#include "least_squares.h"

int main()
{
    matrix<3, 3> x = {{1, 2, 3}};
    matrix<3, 4> y = {{1, 2, 3, 4}};

    auto a = least_squares(x, y);

    return 0;
}