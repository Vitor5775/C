#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (numero < 13) {
        std::cout << "O número é menor que 13." << std::endl;
    } else {
        std::cout << "O número não é menor que 13." << std::endl;
    }

    return 0;
}
