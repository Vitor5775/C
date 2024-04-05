#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (numero % 5 == 0) {
        std::cout << "O número é divisível por 5." << std::endl;
    } else {
        int proximoMultiplo = numero + (5 - numero % 5);
        std::cout << "O número não é divisível por 5. O próximo múltiplo de 5 é: " << proximoMultiplo << std::endl;
    }

    return 0;
}
