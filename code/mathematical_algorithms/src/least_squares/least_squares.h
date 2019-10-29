/**/

#include <array>

template <size_t N, size_t M>
using matrix = std::array<std::array<double, M>, N>;

template <size_t N, size_t M, size_t P>
matrix<M, P>  least_squares(const matrix<N, M> &x, const matrix<N, P> &y)
{
    matrix<M, P> a{0};

    return a;
}
