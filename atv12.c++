#include <iostream>

int main() {
    int numero1, numero2, soma, dobro;

    std::cout << "Digite dois números: ";
    std::cin >> numero1 >> numero2;

    soma = numero1 + numero2;
    dobro = 2 * numero1;

    if (soma > dobro) {
        std::cout << "A soma é maior que o dobro do primeiro número." << std::endl;
    } else if (soma < dobro) {
        std::cout << "A soma é menor que o dobro do primeiro número." << std::endl;
    } else {
        std::cout << "A soma é igual ao dobro do primeiro número." << std::endl;
    }

    return 0;
}
