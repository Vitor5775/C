#include <iostream>

int main() {
    double salario, financiamento;

    std::cout << "Digite o valor do salário: ";
    std::cin >> salario;
    std::cout << "Digite o valor do financiamento pretendido: ";
    std::cin >> financiamento;

    if (financiamento <= 5 * salario) {
        std::cout << "Financiamento Concedido" << std::endl;
    } else {
        std::cout << "Financiamento Negado" << std::endl;
    }

    std::cout << "Obrigado por nos consultar." << std::endl;

    return 0;
}
