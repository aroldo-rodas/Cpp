/*Escreva um programa que pede para o usu�rio inserir dois inteiros, obt�m os n�meros do usu�rio, e ent�o
imprime o maior n�mero seguido pelas palavras �� o maior�.
Se os n�meros forem iguais, imprime a mensagem �Estes n�meros s�o iguais�.  */

#include <iostream> //Pr�-processamento de entrada e sa�da de dados

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
