#include <iostream>
/* using std::cin; */
/* using std::cout; */
using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
    int valores[5];

    cin>>valores[0];
    cin>>valores[1];
    cin>>valores[2];
    cin>>valores[3];
    cin>>valores[4];

    int numeros_negativos = 0;
    for(int i=0;i<5;i++){
        if(valores[i] < 0)
            numeros_negativos += 1;
    }

    cout << numeros_negativos << endl;

    return 0;
}
