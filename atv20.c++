#include <iostream>
#include <string>

int main() {
    std::string nome, sexo;
    int idade;
    double salario, mediaSalarial;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);
    std::cout << "Digite seu sexo (masculino ou feminino): ";
    std::cin >> sexo;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;
    std::cout << "Digite seu salário: R$";
    std::cin >> salario;

    if (sexo == "masculino") {
        mediaSalarial = 2500.00;
    } else if (sexo == "feminino") {
        mediaSalarial = 1500.00;
    } else {
        std::cout << "Sexo inválido." << std::endl;
        return 1;
    }

    std::cout << "Nome: " << nome << std::endl;
    if (salario == mediaSalarial) {
        std::cout << "Você está na média salarial da empresa." << std::endl;
    } else if (salario > mediaSalarial) {
        std::cout << "Você está acima da média salarial da empresa por R$" << (salario - mediaSalarial) << std::endl;
    } else {
        std::cout << "Você está abaixo da média salarial da empresa por R$" << (mediaSalarial - salario) << std::endl;
    }

    return 0;
}
