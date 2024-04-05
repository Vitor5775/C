#include <iostream>

int main() {
    int numero1, numero2, soma;

    std::cout << "Digite dois números: ";
    std::cin >> numero1 >> numero2;

    soma = numero1 + numero2;

    if (soma > 0) {
        std::cout << "A soma é um número positivo." << std::endl;
        if (soma % 2 == 0) {
            std::cout << "E é um número par." << std::endl;
        } else {
            std::cout << "E é um número ímpar." << std::endl;
        }
    } else {
        std::cout << "A soma é um número negativo." << std::endl;
    }

    return 0;
}
