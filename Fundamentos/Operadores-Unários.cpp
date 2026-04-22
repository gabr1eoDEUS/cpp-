#include <iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 1;

    x++; //pos-incremento: primeiro usa o valor de x (2), depois incrementa para 3
    ++y; //pre-incremento: primeiro incrementa y para 2, depois usa o valor de y (2)
    cout << "x: " << x << ", y: " << y << endl; // x: 3, y: 2

    x--; //pos-decremento: primeiro usa o valor de x (3), depois decrementa para 2
    --y; //pre-decremento: primeiro decrementa y para 1, depois usa o valor de y (1)
    cout << "x: " << x << ", y: " << y << endl; 

    cout << x-- << endl; // Imprime 2, depois x se torna 1
    cout << --y << endl; // y se torna 0, depois imprime 0

    //O sinal antes da variável indica que a operação é feita antes de usar o valor (pre), enquanto o sinal depois da variável indica que a operação é feita depois de usar o valor (pos).

    return 0;
}
