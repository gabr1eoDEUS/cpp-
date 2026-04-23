// Biblioteca para entrada e saída de dados
#include <iostream>

// Estou alternando entre namespace e std:: para não esquecer de usar o std:: quando necessário
int main()
{
    // Declara uma variável inteira para armazenar o número do usuário
    int number;

    // Exibe uma mensagem pedindo ao usuário para digitar um número
    std::cout << "Enter a number: ";

    // Lê o número digitado e armazena na variável 'number'
    std::cin >> number;

    // Verifica se o número é par usando o operador módulo (%)
    // Se o resto da divisão por 2 for 0, o número é par
    if (number % 2 == 0){
        std::cout << "The number is even.\n";
    }
    // Se o número não for par, ele é ímpar
    else{
        std::cout << "The number is odd.\n";
    }

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
