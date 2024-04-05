#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Digite dois números: ";
    std::cin >> num1 >> num2;

    if (num1 % 2 == 0 && num2 % 2 == 0) {
        std::cout << "Ambos os números são pares." << std::endl;
    } else if (num1 % 2 != 0 && num2 % 2 != 0) {
        std::cout << "Ambos os números são ímpares." << std::endl;
    } else {
        std::cout << "Há um número par e um número ímpar." << std::endl;
        std::cout << "O número " << (num1 % 2 != 0 ? num1 : num2) << " é ímpar e o número " << (num1 % 2 == 0 ? num1 : num2) << " é par." << std::endl;
    }

    return 0;
}
