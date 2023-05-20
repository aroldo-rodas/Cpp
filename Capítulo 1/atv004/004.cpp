/*Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então
imprime o maior número seguido pelas palavras “é o maior”.
Se os números forem iguais, imprime a mensagem “Estes números são iguais”.  */

#include <iostream> //Pré-processamento de entrada e saída de dados

using std::cout;

int main(){
    int a, b;

    cout << "Informe dois interiros: ";
    std::cin >> a >> b;

    if(a == b)
        cout << "Estes numeros sao iguais.";

    if(a > b)
        cout << a << " eh o maior.";

    if(b > a)
        cout << b << " eh o maior.";


    return 0;
}
