// Exemplo simples que demonstra tipos primitivos básicos em C++
// Referências: https://pt.cppreference.com/ , https://cplusplus.com/
#include <iostream>
// https://pt.cppreference.com/cpp/language/types
// https://www.geeksforgeeks.org/cpp/cpp-data-types/
// https://cplusplus.com/reference/string/string/
int main()
{
    // booleano: armazena verdadeiro/falso
    bool isAdmin = true; // true ou false (internamente 1 ou 0)

    // caractere: tipo para um único caractere (normalmente 1 byte)
    char symbol = '$';

    // inteiro: tipo inteiro com tamanho dependente da plataforma (normalmente 32 bits)
    int age = 24;

    // ponto flutuante (precisão simples): normalmente 32 bits
    // 'const' torna a variável imutável após a inicialização
    const float pi = 3.14f;

    // ponto flutuante (precisão dupla): normalmente 64 bits, mais preciso que float
    const double PI = 3.141592;

    // Observação:
    // - Existem modificadores de tipo como signed, unsigned, long, short
    //   que alteram o intervalo e o tamanho dos tipos inteiros.
    // - Para código portável e claro, prefira tipos com tamanho explícito
    //   quando necessário (ex: int32_t, uint64_t em <cstdint>).

    return 0; // 0 indica término bem‑sucedido do programa
}
