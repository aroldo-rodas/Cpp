/*Escreva um programa que imprime os números 1 a 4 na mesma linha com cada par de números adjacentes
separados por um espaço. Faça isso de várias maneiras. */

#include <iostream> //Pré-processamento de entrada e saída

using std::cout;

int main(){

    //a) Utilizando uma instrução com um operador de inserção de fluxo.
    cout << "1 2 3 4 \n";

    //b) Utilizando uma instrução com quatro operadores de inserção de fluxo.
    cout << "1 " << "2 " << "3 " << "4 \n";

    //c) Utilizando quatro instruções.
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4 ";

    return 0;
}
