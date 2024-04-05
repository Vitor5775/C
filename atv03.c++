#include <iostream>

int main() {
    int numero1, numero2, numero3;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> numero3;

    double media = static_cast<double>(numero1 + numero2 + numero3) / 3;
    if (media > 20) {
        std::cout << "A média dos números é maior que 20." << std::endl;
    } else {
        std::cout << "A média dos números não é maior que 20." << std::endl;
    }

    return 0;
}
