#include <iostream>

int main() {
    double numero1, numero2, media;

    std::cout << "Digite dois números: ";
    std::cin >> numero1 >> numero2;

    media = (numero1 + numero2) / 2;

    if (media > 15) {
        std::cout << "Número 1: " << numero1 << ", Número 2: " << numero2 << std::endl;
        std::cout << "A média é maior que 15!" << std::endl;
    } else {
        std::cout << "A média não ultrapassou o valor de 15." << std::endl;
    }

    return 0;
}
