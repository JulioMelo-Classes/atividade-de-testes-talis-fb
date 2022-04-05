#include "function.h"
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.
    

    // meu array
    vector<unsigned int> valores;
    for(int i=0; i < n; i++){
        if(i == 0 || i == 1)
            valores.push_back({ 1 });
        else
            valores.push_back({ (valores[i-1] + valores[i-2]) });
    }
    /* meus_n.push_back({ 3 }); */
    /* meus_n.size(); */


    /* return std::vector<unsigned int>{}; */
    return valores;
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    /* return std::vector<unsigned int>{}; */
}
