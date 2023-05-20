/*Escreva um programa que imprime os n�meros 1 a 4 na mesma linha com cada par de n�meros adjacentes
separados por um espa�o. Fa�a isso de v�rias maneiras. */

#include <iostream> //Pr�-processamento de entrada e sa�da

using std::cout;

int main(){

    //a) Utilizando uma instru��o com um operador de inser��o de fluxo.
    cout << "1 2 3 4 \n";

    //b) Utilizando uma instru��o com quatro operadores de inser��o de fluxo.
    cout << "1 " << "2 " << "3 " << "4 \n";

    //c) Utilizando quatro instru��es.
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4 ";

    return 0;
}
