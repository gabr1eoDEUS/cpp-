// Bibliotecas necessárias
#include <iostream>
using namespace std;

// Função principal
int main()
{
    // Declara uma variável do tipo double para armazenar a nota final
    double finalGrade;

    // Exibe uma mensagem pedindo ao usuário para digitar a nota final
    cout << "Enter the final grade: ";

    // Lê a nota final inserida pelo usuário e armazena na variável
    cin >> finalGrade;

    // Verifica se a nota é maior ou igual a 7.0 (aprovado)
    if (finalGrade >= 7.0)
    {
        // Se a condição for verdadeira, exibe a mensagem de aprovação
        cout << "Approved!\n";
    }

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
