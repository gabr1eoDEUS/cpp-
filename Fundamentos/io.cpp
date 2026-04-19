#include <iostream>  // header para streams de entrada/saída (std::cin, std::cout)
using namespace std; // permite usar nomes do std sem o prefixo "std::"
// Nota: em projetos maiores, prefira usar "std::" explicitamente para evitar conflitos.

int main()
{
    string name; // variável para armazenar o nome do usuário (lê até o primeiro espaço)

    // Operador de inserção: escreve no stream de saída padrão (console).
    cout << "Digite seu nome: ";

    // Operador de extração: lê do stream de entrada padrão (teclado).
    // Observação: 'cin >> name' lê até o primeiro espaço. Para ler nomes com espaços,
    // use std::getline(cin, name).
    cin >> name;

    // Exibe uma saudação concatenando strings no stream de saída.
    cout << "Ola, " << name << ". Bem-vindo(a)!\n";

    // Retorna 0 indicando término bem-sucedido do programa.
    return 0;
}
