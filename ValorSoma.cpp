#include <iostream>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K < INDICE) {
        K ++;
        SOMA = SOMA + K;
    }

    std::cout << "O valor da variável SOMA é: " << SOMA << std::endl;

    return 0;
}