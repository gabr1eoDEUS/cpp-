#include <iostream>

int main()
{
    // Leitura da nota final (pode ser decimal)
    double finalGrade;
    std::cout << "Enter the final grade: ";
    std::cin >> finalGrade;

    // Leitura de comportamento como booleano (0 = false, 1 = true)
    bool goodBehavior;
    std::cout << "Is he/she well-behaved? (0 = no, 1 = yes): ";
    std::cin >> goodBehavior;

    // Exemplos de expressões lógicas combinando comparações e operadores lógicos
    bool goodStudent = finalGrade >= 9 && goodBehavior;      // nota alta E bom comportamento
    bool averageStudent = finalGrade >= 5 && finalGrade < 9; // nota média (exemplo de definição)
    bool badStudent = finalGrade <= 3 && !goodBehavior;      // nota baixa E mau comportamento
    bool loanCancelled = finalGrade <= 3 || !goodBehavior;   // nota muito baixa OU mau comportamento

    // Imprime resultados (use boolalpha para ver 'true'/'false' ao invés de 1/0)
    std::cout << std::boolalpha;
    std::cout << "Good student? " << goodStudent << "\n";
    std::cout << "Average student? " << averageStudent << "\n";
    std::cout << "Bad student? " << badStudent << "\n";
    std::cout << "Will the loan be cancelled? " << loanCancelled << "\n\n";

    // Tabelas verdade completas para operadores lógicos básicos
    std::cout << "Truth table - AND (&&)\n";
    std::cout << "A     B     A && B\n";
    std::cout << "true  true  " << (true && true) << "\n";
    std::cout << "true  false " << (true && false) << "\n";
    std::cout << "false true  " << (false && true) << "\n";
    std::cout << "false false " << (false && false) << "\n\n";

    std::cout << "Truth table - OR (||)\n";
    std::cout << "A     B     A || B\n";
    std::cout << "true  true  " << (true || true) << "\n";
    std::cout << "true  false " << (true || false) << "\n";
    std::cout << "false true  " << (false || true) << "\n";
    std::cout << "false false " << (false || false) << "\n\n";

    std::cout << "Truth table - XOR (^)  (exclusive OR)\n";
    std::cout << "A     B     A ^ B\n";
    std::cout << "true  true  " << (true ^ true) << "\n";
    std::cout << "true  false " << (true ^ false) << "\n";
    std::cout << "false true  " << (false ^ true) << "\n";
    std::cout << "false false " << (false ^ false) << "\n\n";

    std::cout << "Truth table - NOT (!)\n";
    std::cout << "A     !A\n";
    std::cout << "true  " << (!true) << "\n";
    std::cout << "false " << (!false) << "\n\n";

    // Mantém a janela aberta em Windows quando executado fora do terminal integrado
    system("pause");
    return 0;
}
