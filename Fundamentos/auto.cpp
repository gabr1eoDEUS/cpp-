#include <iostream>
#include <typeinfo> // fornece typeid e std::type_info

int main(){
    // 'auto' permite inferência de tipo pelo compilador a partir do valor inicial.
    auto a = 1;     // deduzido como int
    auto b = 1.2;   // deduzido como double
    auto c = false; // deduzido como bool

    // typeid(expr).name() retorna uma string identificadora do tipo em tempo de execução.
    std::cout << typeid(a).name() << "\n";
    std::cout << typeid(b).name() << "\n";
    std::cout << typeid(c).name() << "\n";

    return 0; // indica término bem-sucedido
}
