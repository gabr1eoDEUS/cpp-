#include <iostream>

// Exemplo simples de operações com std::string:
// - criação via literal e construtor
// - uso do construtor (count, char) para repetir um caractere
// - consulta do tamanho com size()
// - concatenação via operator+ e modificação com append()
int main()
{
    // Prefixo honorífico como string literal
    std::string title = "Mr. ";

    // Nome do usuário criado a partir do construtor que recebe C-string
    std::string name("Gabriel");

    // Constrói uma string contendo 2 vezes o caractere '!'
    // Construtor: std::string(size_t count, char ch)
    std::string xVezes(2, '!');

    // Imprime o tamanho atual de 'name' (número de caracteres)
    // Ex.: "Gabriel" tem size() == 7
    std::cout << name.size() << "\n";

    // name.append(xVezes) modifica 'name' adicionando o conteúdo de xVezes
    // append retorna uma referência a 'name', portanto:
    // title + name.append(xVezes) -> concatena 'title' com a nova 'name'
    // Resultado impresso: "Mr. Gabriel!!"
    std::cout << title + name.append(xVezes) << "\n";

    // Observação: após append, 'name' foi modificado permanentemente
    // Se você não quiser alterar 'name', use uma cópia: title + (name + xVezes)
    return 0;
}
