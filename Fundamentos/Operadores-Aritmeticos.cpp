#include <iostream>

// Programa que demonstra operadores aritméticos binários básicos.
// Observações:
// - Operações entre inteiros realizam aritmética inteira:
//   a / b descarta a parte fracionária (ex.: 7/2 == 3).
// - A operação x % y (módulo) retorna o resto da divisão inteira.
// - Divisão ou módulo por zero causa comportamento indefinido / erro em tempo de execução.
//   Aqui NÃO há verificação (if); portanto o usuário deve fornecer y != 0.
int main()
{
    // Declaração de operandos inteiros.
    int x, y;

    // Entrada dos valores pelo usuário.
    std::cout << "Valor de X: ";
    std::cin >> x;
    std::cout << "Valor de Y: ";
    std::cin >> y;

    std::cout << "Result: \n";

    // Soma: prioridade menor que *,/,%
    std::cout << x + y << "\n";

    // Subtração
    std::cout << x - y << "\n";

    // Multiplicação: tem precedência sobre + e -
    std::cout << x * y << "\n";

    // Divisão inteira: truncamento do resultado (atenção a y == 0)
    std::cout << x / y << "\n";

    // Resto da divisão inteira (módulo): atenção a y == 0
    std::cout << x % y << "\n";

    return 0;
}
