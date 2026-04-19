#include <iostream> // Cabeçalho da biblioteca de I/O padrão C++ (std::cout, std::cin, etc.)

using namespace std; // Torna nomes do namespace std acessíveis sem o prefixo "std::"
// Observação: em projetos maiores é preferível evitar 'using namespace std;' em escopo global
// para prevenir conflitos de nomes; aqui é usado apenas por simplicidade em exemplos.

int main()
{
    // Acesso explícito ao namespace std:
    std::cout << "Usando 'std'\n";

    // Acesso direto ao nome 'cout' devido ao 'using namespace std':
    cout << "Sem 'std'\n";

    // Retorna 0 indicando término bem‑sucedido do programa.
    return 0;
}
