#include <iostream> // std::cout: fluxo de saída em C++ (stream-based)
#include <cstdio>   // printf, puts: funções de E/S em estilo C

int main()
{
    // std::cout: operador << envia dados ao stream de saída padrão.
    // '\n' adiciona nova linha; usar std::endl também faz flush do stream.
    std::cout << "Utilizando 'cout': Hello World!\n";

    // printf: saída formatada em estilo C.
    // Útil para formatação complexa, mas menos seguro/idiomático em C++.
    printf("Utilizando 'printf': Hello World!\n");

    // puts: escreve a string e adiciona uma nova linha automaticamente.
    // Observação: a string passada já contém '\n', portanto isso pode gerar
    // uma linha em branco extra. Normalmente usa-se puts("texto"); sem '\n'.
    puts("Utilizando 'puts': Hello World!\n");

    // Retorna 0 para indicar término bem-sucedido do programa.
    return 0;
}
