#include "function.h"
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    /* vector<unsigned int> vazio = {}; */
    if( n <= 1 )
        return {};

    vector<unsigned int> valores = { 1, 1 };

    for(int i=2; i < n; i++){
        unsigned int valor_atual =  (valores[i-1] + valores[i-2]);
        if( valor_atual >= n ){
            break;
        }
        valores.push_back({ valor_atual });
    }

    return valores;
}
