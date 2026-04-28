#include <iostream>
using namespace std;

int main()
{
    // Este programa demonstra o conceito de referências em C++ e atribuição por cópia

    // Declaração de uma string com valor inicial
    string greeting = "Hello World";

    // Criação de uma referência: goodRef aponta para greeting
    string &goodRef = greeting; // goodRef é uma referência para greeting

    // Imprime o valor de greeting e goodRef (ambos mostram "Hello World")
    cout << greeting << "\t" << goodRef << endl;

    // Declaração de uma nova string
    string name = "Gabriel";

    // Atribuição por cópia: o conteúdo de name é copiado para greeting através da referência goodRef
    goodRef = name; // Atribuição por cópia, o conteúdo de name é copiado para greeting

    // Imprime os valores após a atribuição
    cout << name << endl;     // Imprime "Gabriel"
    cout << goodRef << endl;  // goodRef agora mostra "Gabriel", pois é uma referência para greeting, que foi atualizado com o conteúdo de name
    cout << greeting << endl; // greeting também mostra "Gabriel", pois goodRef é uma referência para greeting

    // Demonstração dos endereços de memória
    cout << "Address of greeting: " << &greeting << endl; // Endereço de greeting
    cout << "Address of goodRef: " << &goodRef << endl;   // goodRef tem o mesmo endereço de greeting, pois é uma referência para ele
    cout << "Address of name: " << &name << endl;         // name tem um endereço diferente, pois é uma variável separada

    // O operador '&' é usado para obter o endereço de memória de uma variável
    // Operador de local de memória/endereço '&'

    return 0;
}
