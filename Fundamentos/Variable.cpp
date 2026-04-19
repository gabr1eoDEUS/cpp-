#include <iostream>

int main()
{
    // Declaração e inicialização de variáveis:
    // double: tipo de ponto flutuante de precisão dupla (número real).
    double price = 99.80; // preço base do produto
    double tax = 0.08;    // taxa de imposto (8%)

    // Cálculo usando expressão: calcula o preço final aplicando a taxa.
    // finalPrice = price * (1 + tax)
    double finalPrice = price * (1 + tax);

    // Saída no console:
    // '<<' insere valores no stream de saída std::cout.
    // '\n' adiciona nova linha ao final da saída.
    std::cout << "The final price is R$" << finalPrice << "\n";

    // Retorna 0 para indicar término bem-sucedido do programa.
    return 0;
}
