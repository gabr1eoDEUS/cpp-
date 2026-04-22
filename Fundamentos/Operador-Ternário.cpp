// Programa demonstrando o uso do operador ternário (? :) em C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ========== EXEMPLO 1: Operador Ternário Básico ==========

    // Variável booleana que determina se está ensolarado
    bool sunny = true;

    // Operador ternário: condição ? valor_se_verdadeiro : valor_se_falso
    // Se 'sunny' for true, atribui "It's a sunny day!", caso contrário "It's not sunny today."
    string result = sunny ? "It's a sunny day!" : "It's not sunny today.";
    cout << result << endl;

    // ========== EXEMPLO 2: Operador Ternário em Cálculo ==========

    // Saldo inicial da conta bancária
    double balance = 1234.56;

    // Variável para armazenar o valor da transação
    double value;
    cout << "Enter the value: ";
    cin >> value;

    // Variável para indicar o tipo de transação (Crédito ou Débito)
    char creditOrDebit;
    cout << "Is it a credit (C) or debit (D)? ";
    cin >> creditOrDebit;

    // Exibe o saldo antes da transação
    cout << "Balance [before]: " << balance << endl;

    // Usa operador ternário para decidir se soma (crédito) ou subtrai (débito)
    // Se for 'C' ou 'c' (crédito), adiciona o valor; caso contrário, subtrai
    balance += (creditOrDebit == 'C' || creditOrDebit == 'c') ? value : -value;

    // Exibe o saldo após a transação
    cout << "Balance [after]: " << balance << endl;

    return 0;
}
