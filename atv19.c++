#include <iostream>

int main() {
    double salario, gastoCelular, porcentagem;

    std::cout << "Digite o salário: ";
    std::cin >> salario;
    std::cout << "Digite o gasto com a conta de telefone celular: ";
    std::cin >> gastoCelular;

    porcentagem = (gastoCelular / salario) * 100;

    if (porcentagem <= 5) {
        std::cout << "A sua conta está dentro do planejamento de gastos com telefone celular." << std::endl;
    } else if (porcentagem > 5 && porcentagem < 7) {
        std::cout << "Atenção para a sua conta de telefone celular." << std::endl;
    } else {
        std::cout << "A sua conta está acima do planejamento de gastos com telefone celular." << std::endl;
    }

    return 0;
}
