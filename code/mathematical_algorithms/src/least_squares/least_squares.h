/**/

#include <array>

template <unsigned int N, unsigned int M>
using matrix = std::array<std::array<double, M>, N>;

template <unsigned int N, unsigned int M, unsigned int P>
matrix<N, M>  least_squares(const matrix<N, M> &x, const matrix<N, P> &y);
