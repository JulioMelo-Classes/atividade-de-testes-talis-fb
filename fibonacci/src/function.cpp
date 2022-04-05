#include "function.h"
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    if( n <= 1 ) return {};

    vector<unsigned int> valores = { 1, 1 };
    while( true ){
        unsigned int valor_atual =  valores.end()[-1] + valores.end()[-2];
        if( valor_atual >= n ) break;
        valores.push_back({ valor_atual });
    }

    return valores;
}
