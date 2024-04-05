#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (numero >= 21 && numero <= 30) {
        std::cout << "O número está entre 21 e 30." << std::endl;
    } else {
        std::cout << "O número não está entre 21 e 30." << std::endl;
    }

    return 0;
}
