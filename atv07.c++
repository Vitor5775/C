#include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Digite dois números: ";
    std::cin >> numero1 >> numero2;

    if (numero1 == numero2) {
        std::cout << "Você digitou 2 números iguais!" << std::endl;
    } else {
        std::cout << "Menor número: " << (numero1 < numero2 ? numero1 : numero2) << std::endl;
        std::cout << "Maior número: " << (numero1 > numero2 ? numero1 : numero2) << std::endl;
    }

    return 0;
}
