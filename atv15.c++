#include <iostream>

int main() {
    int num1, num2, soma;

    std::cout << "Digite dois números: ";
    std::cin >> num1 >> num2;

    soma = num1 + num2;

    if (soma >= 13 && soma <= 30) {
        std::cout << "A soma está entre 13 e 30." << std::endl;
    } else if (soma < 13) {
        std::cout << "A soma é menor que 13." << std::endl;
    } else if (soma > 20) {
        std::cout << "A soma é maior que 20." << std::endl;
    }

    return 0;
}
