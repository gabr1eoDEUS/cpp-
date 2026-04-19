#include <iostream>

// Programa de exemplo que demonstra a estrutura básica de uma função main,
// uso de blocos delimitados por chaves, terminação de sentenças com ';'
// e saída para o console usando std::cout.
int main()
{
    {
        // Bloco local: cria um escopo limitado por chaves.
        // Variáveis declaradas aqui (se houvesse) teriam duração apenas dentro
        // deste bloco e seriam destruídas ao sair do escopo.
        ; // Sentença vazia: apenas demonstra que cada instrução termina com ';'.
    }

    // Imprime uma mensagem seguida de quebra de linha ('\n').
    // Usamos std::cout para saída padrão (console).
    std::cout << "End coding!\n";

    // Valor de retorno da função main:
    // retornar 0 normalmente indica que o programa terminou com sucesso.
    return 0;
}

/*
    Exemplo de comentário em bloco (comentário multilinha).
    Útil para documentar longas explicações ou desativar temporariamente
    trechos de código durante testes.
*/
