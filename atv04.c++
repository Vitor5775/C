#include <iostream>
#include <iomanip>

int main() {
    double valorTotal, valorDesconto, valorFinal;

    std::cout << "Digite o valor total da compra: ";
    std::cin >> valorTotal;

    if (valorTotal > 150.00) {
        valorDesconto = valorTotal * 0.045;
    } else if (valorTotal >= 100.00 && valorTotal <= 150.00) {
        valorDesconto = valorTotal * 0.0249;
    } else {
        valorDesconto = 0.00;
    }

    valorFinal = valorTotal - valorDesconto;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor total da compra: R$" << valorTotal << std::endl;
    std::cout << "Valor do desconto: R$" << valorDesconto << std::endl;
    std::cout << "Valor final a ser pago: R$" << valorFinal << std::endl;

    return 0;
}
