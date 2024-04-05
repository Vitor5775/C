#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (numero % 7 == 0) {
        std::cout << "O número é divisível por 7." << std::endl;
    } else {
        std::cout << "O número não é divisível por 7." << std::endl;
    }

    return 0;
}
