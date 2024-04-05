#include <iostream>
#include <iomanip>

int main() {
    double valorProduto, valorFinal;
    int modoPagamento;

    std::cout << "Digite o valor do produto: ";
    std::cin >> valorProduto;

    std::cout << "Modo de pagamento (1 - à vista, 2 - 2 prestações, 3 - 3 prestações, 4 - 4 prestações): ";
    std::cin >> modoPagamento;

    switch (modoPagamento) {
        case 1:
            valorFinal = valorProduto * (1 - 0.0145);
            break;
        case 2:
            valorFinal = valorProduto * (1 + 0.0015);
            break;
        case 3:
            valorFinal = valorProduto * (1 + 0.0106);
            break;
        case 4:
            valorFinal = valorProduto * (1 + 0.0151);
            break;
        default:
            std::cout << "Opção inválida." << std::endl;
            return 1;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor total do produto: R$" << valorProduto << std::endl;
    std::cout << "Valor do produto com a opção escolhida: R$" << valorFinal << std::endl;
    if (modoPagamento > 1) {
        std::cout << "Valor das prestações: R$" << valorFinal / modoPagamento << std::endl;
    }

    return 0;
}
