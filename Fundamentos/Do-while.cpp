#include <iostream>  // Inclui a biblioteca para entrada e saída
using namespace std; // Permite usar elementos do namespace std sem prefixo

int main()
{               // Função principal do programa
    int number; // Variável para armazenar o número inserido pelo usuário

    // Loop do-while: executa pelo menos uma vez e continua enquanto o número não for -1
    do
    {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;
    } while (number != -1);

    return 0; // Retorna 0 indicando execução bem-sucedida
}
