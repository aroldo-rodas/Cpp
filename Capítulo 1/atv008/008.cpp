//Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par.

#include <iostream> //Pre-processamento de entrada e saida

int main(){
    int n, mod;

    std::cout << "Informe um numero: ";
    std::cin >> n;

    mod = n % 2;

    if(mod == 0)
        std::cout << "O numero eh par! " << std::endl;
    if(mod != 0)
        std::cout << "O numero eh impar!" << std::endl;

    return 0;
}
