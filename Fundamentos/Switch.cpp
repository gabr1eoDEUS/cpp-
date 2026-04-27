#include <iostream>  // Inclui a biblioteca para entrada e saída
using namespace std; // Permite usar elementos do namespace std sem prefixo

int main()
{              // Função principal do programa
    int month; // Variável para armazenar o número do mês inserido
    cout << "Enter a month number: ";
    cin >> month;
    int numberOfDays; // Variável para armazenar o número de dias do mês

    // Estrutura switch para determinar o número de dias baseado no mês
    switch (month)
    {
    case 2:
    { // Fevereiro tem 28 dias (não considera ano bissexto)
        numberOfDays = 28;
        cout << "February has " << numberOfDays << " days.\n";
        break;
    }
    // Meses com 31 dias
    // Linha vertical para melhor legibilidade
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        numberOfDays = 31;
        cout << "March has " << numberOfDays << " days.\n"; // Nota: mensagem incorreta, deveria ser genérica
        break;
    }
    // Meses com 30 dias
    case 4:
    case 6:
    case 9:
    case 11:
    {
        numberOfDays = 30;
        cout << "April has " << numberOfDays << " days.\n"; // Nota: mensagem incorreta, deveria ser genérica
        break;
    }
    default: // Caso o mês seja inválido
        cout << "Invalid month number.\n";
        break;
    }

    cout << "The month you entered has " << numberOfDays << " days.\n"; // Imprime o número de dias
    return 0;                                                           // Retorna 0 indicando execução bem-sucedida
}
