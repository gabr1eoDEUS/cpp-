#include <iostream>  // Inclui a biblioteca para entrada e saída
using namespace std; // Permite usar elementos do namespace std sem prefixo

int main()
{ // Função principal do programa
    // Primeiro loop: imprime números de 1 a 10 em uma linha
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    // Segundo loop: imprime números pares de 100 até 0, cada um em uma nova linha
    for (int j = 100; j >= 0; j -= 2)
    {
        cout << j << "\n";
    }

    return 0; // Retorna 0 indicando execução bem-sucedida
}
