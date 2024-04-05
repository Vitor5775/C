#include <iostream>

int main() {
    double num1, num2, num3, media;

    std::cout << "Digite três números: ";
    std::cin >> num1 >> num2 >> num3;

    media = (num1 + num2 + num3) / 3;

    if (media > num1) {
        std::cout << "A média é maior que o primeiro número." << std::endl;
    } else if (media < num1) {
        std::cout << "A média é menor que o primeiro número." << std::endl;
    } else {
        std::cout << "A média é igual ao primeiro número." << std::endl;
    }

    return 0;
}
