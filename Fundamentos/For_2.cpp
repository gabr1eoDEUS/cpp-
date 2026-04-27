#include <iostream> // Inclui a biblioteca para entrada e saída

int main()
{
    /*for(;;){  // Loop infinito comentado (não executado)
        cout << "LOOP Infinite.\n";
    }*/

    int number = 0; // Variável para armazenar o número inserido pelo usuário
    int total = 0;  // Soma total dos números inseridos
    int qty = 0;    // Quantidade de números inseridos

    // Loop que continua até o usuário inserir -1
    for (; number != -1;)
    {
        std::cout << "Enter a number or -1 to finish: ";
        std::cin >> number;
        if (number != -1)
        {
            total += number; // Adiciona o número ao total
            qty++;           // Incrementa a quantidade
        }
    }

    double avg = ((double)total) / qty; // Calcula a média como double
    std::cout << avg << "\n";           // Imprime a média

    return 0; // Retorna 0 indicando execução bem-sucedida
}
