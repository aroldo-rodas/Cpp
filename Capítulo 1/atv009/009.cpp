//Escreva um programa que lê dois inteiros e determina e imprime se o primeiro é um múltiplo do segundo.

#include <iostream> //Pre-processamento de entrada e saida

int main(){
    int n1, n2, mod;

    std::cout << "Informe dois numeros: " << std::endl;
    std::cin >> n1 >> n2;

    mod = n2 % n1;
    if(mod == 0)
        std::cout << "Eh multiplo!";
    if(mod != 0)
        std::cout << "Nao eh multiplo!";

    return 0;
}
