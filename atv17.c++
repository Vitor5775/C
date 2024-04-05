#include <iostream>
#include <cmath>

int main() {
    int cascos, engradados;

    std::cout << "Digite a quantidade de cascos de refrigerante: ";
    std::cin >> cascos;

    engradados = std::ceil(static_cast<double>(cascos) / 24);

    std::cout << "Você precisa comprar " << engradados << " engradados de 24 garrafas." << std::endl;

    return 0;
}
