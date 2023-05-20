/*Escreva um programa que lê o raio de um círculo como um inteiro e imprime o diâmetro, a circunferência e a
área do círculo. Utilize o valor constante 3,14159 para π. Faça todos os cálculos em instruções de saída. */

#include <iostream> //Pré-processamento de entrada e saida

int main(){
    int raio;

    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;

    std::cout << "O raio eh: " << raio << "\n" << "O diametro eh: " << 2 * raio << std::endl;
    std::cout << "A circunferencia eh: " << 3.14159 * raio * 2 << "\n" << "A area eh: " << 3.14159 * raio * raio <<  std::endl;

    return 0;
}
