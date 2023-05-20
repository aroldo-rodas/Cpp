/*Escreva um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro no grupo.
Utilize somente as técnicas de programação que você aprendeu neste capítulo. */

#include <iostream> //Pre-processamento de entrada e saida

int main(){
    int n1, n2, n3, n4 , n5, maior, menor;

    std::cout << "Informe cinco numeros: \n";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    //Para determinar o maior numero
    maior = n1;
    if(n2 > n1)
        maior = n2;
    if(n3 > maior)
        maior = n3;
    if(n4 > maior)
        maior = n4;
    if(n5 > maior)
        maior = n5;

    //Para determinar o menor numero
    menor = n1;
    if(n2 < n1)
        menor = n2;
    if(n3 < menor)
        menor = n3;
    if(n4 < menor)
        menor = n4;
    if(n5 < menor)
        menor = n5;

    std::cout << "Maior: " << maior << std::endl;
    std::cout << "Menor: " << menor << std::endl;

    return 0;
}
