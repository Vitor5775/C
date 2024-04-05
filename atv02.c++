#include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    int soma = numero1 + numero2;
    if (soma > 123) {
        std::cout << "A soma dos números é maior que 123." << std::endl;
    } else {
        std::cout << "A soma dos números não é maior que 123." << std::endl;
    }

    return 0;
}