#include <iostream>

// Programa demonstrando operadores de atribuição compostos.
// Operadores mostrados: +=, -=, *=, /=, %=
// Observações:
// - Operadores compostos combinam uma operação e atribuição:
//     x += 10  é equivalente a  x = x + 10
// - Para tipos inteiros, a divisão (/=) realiza divisão inteira (trunca parte fracionária).
// - x %= 10 calcula o resto da divisão inteira e atribui o resultado a x (x = x % 10).
// - Não há verificação adicional de erros (ex.: overflow); este é um exemplo educativo.
int main()
{
    int x;

    // Solicita e lê um valor inteiro do usuário.
    std::cout << "Enter the initial value: ";
    std::cin >> x;

    // Adição seguida de atribuição: aumenta x em 10
    x += 10; // equivalente a: x = x + 10
    std::cout << "Value +=: " << x << "\n";

    // Subtração seguida de atribuição: reduz x em 10
    x -= 10; // equivalente a: x = x - 10
    std::cout << "Value -=: " << x << "\n";

    // Multiplicação seguida de atribuição: multiplica x por 10
    x *= 10; // equivalente a: x = x * 10
    std::cout << "Value *=: " << x << "\n";

    // Divisão inteira seguida de atribuição: divide x por 10 (trunca se houver resto)
    x /= 10; // equivalente a: x = x / 10
    std::cout << "Value /=: " << x << "\n";

    // Resto (módulo) seguido de atribuição: mantém apenas o resto da divisão de x por 10
    // Ex.: 17 % 10 == 7
    x %= 10; // equivalente a: x = x % 10
    std::cout << "Value %=: " << x << "\n";

    return 0;
}
