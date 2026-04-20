#include <iostream>
int main() {
    double area, raio;
    const double PI = 3.14;
    std::cout << "Digite o raio(r): ";
    std::cin >> raio;
    area = PI * (raio*raio);
    std::cout << "Area da circunferencia: " << area << " cm²" << "\n";
    return 0;
}
