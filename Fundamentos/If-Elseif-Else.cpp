// Biblioteca para entrada e saída de dados
#include <iostream>
using namespace std;

// Função principal
int main()
{
    // Declara três variáveis inteiras para armazenar os números do usuário
    int n1, n2, n3;

    // Exibe uma mensagem pedindo ao usuário para digitar três números
    cout << "Enter three numbers: ";

    // Lê os três números digitados e armazena nas variáveis
    cin >> n1 >> n2 >> n3;

    // Verifica se n1 é maior ou igual a n2 E maior ou igual a n3
    if (n1 >= n2 && n1 >= n3)
    {
        // Se a condição for verdadeira, n1 é o maior número
        cout << "The largest number is: " << n1 << endl;
    }
    // Se a primeira condição for falsa, verifica se n2 é maior ou igual a n1 E a n3
    else if (n2 >= n1 && n2 >= n3)
    {
        // Se esta condição for verdadeira, n2 é o maior número
        cout << "The largest number is: " << n2 << endl;
    }
    // Se nenhuma das condições anteriores for verdadeira
    else
    {
        // Então n3 é o maior número
        cout << "The largest number is: " << n3 << endl;
    }

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
