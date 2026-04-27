#include <iostream>  // Inclui a biblioteca para entrada e saída
using namespace std; // Permite usar elementos do namespace std sem prefixo

int main()
{ // Função principal do programa
    // Primeiro loop: demonstra o uso de break
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl; // Imprime o valor de i
        if (i == 5)
        {
            break; // Interrompe o loop quando i é igual a 5
            // continue; // Pula o restante do código no loop e continua com a próxima iteração quando i é igual a 5
        }
        cout << i << endl; // Esta linha não será executada quando i for igual a 5
    }
    cout << "Loop has been exited.\n"; // Esta linha será executada após o loop ser interrompido

    // Laços aninhados: dois loops for aninhados
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "i: " << i << ", j: " << j << endl; // Imprime os valores de i e j
        }
    }

    return 0; // Retorna 0 indicando execução bem-sucedida
}
