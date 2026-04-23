// Biblioteca para entrada e saída de dados
#include <iostream>
using namespace std;

int main()
{
    // Variável para guardar o número digitado pelo usuário
    int number = 0, count = 0;

    // Soma dos números válidos inseridos
    double media = 0;

    // Enquanto o usuário não digitar -1, o loop continua
    while (number != -1)
    {
        cout << "Enter a number (-1 to exit): ";
        cin >> number;

        // Somente conta o número se não for o valor de saída (-1)
        if (number != -1)
        {
            media += number; // acumula a soma
            count++;         // incrementa o número de valores válidos
        }
    }

    // Calcula a média dividindo a soma pela quantidade de valores
    double avg = media /= count;

    // Exemplo de casting para garantir divisão em ponto flutuante:
    // avg = static_cast<double>(media) / count;
    // Converte media para double antes de dividir por count.
    // double avg = (double)media / count; // C-style cast, menos recomendado em C++

    cout << "The average is: " << avg << endl;

    return 0;
}
