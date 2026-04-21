#include <iostream>
int main(){
    // Variável para armazenar o número fornecido pelo usuário.
    int x;

    // Pede ao usuário que digite um número e lê o valor da entrada padrão.
    std::cout << "Enter a number: ";
    std::cin >> x;

    // Operadores relacionais com 10:
    // Cada expressão retorna um bool (true/false). Ao imprimir sem std::boolalpha,
    // true aparece como 1 e false como 0.
    std::cout << x << " > 10  -> " << (x > 10) << "\n";  // maior que
    std::cout << x << " >= 10 -> " << (x >= 10) << "\n"; // maior ou igual
    std::cout << x << " <= 10 -> " << (x <= 10) << "\n"; // menor ou igual
    std::cout << x << " == 10 -> " << (x == 10) << "\n"; // igualdade
    std::cout << x << " < 10  -> " << (x < 10) << "\n";  // menor que
    std::cout << x << " != 10 -> " << (x != 10) << "\n"; // diferente de

    return 0; // indica execução bem-sucedida
}
