/*Escreva um programa que insere um inteiro de cinco d�gitos, separa o inteiro em seus d�gitos
individuais e imprime os d�gitos separados entre si por tr�s espa�os cada. */

#include <iostream> //Pre-processamento de entrada e saida

int main(){
    int n, a, b, c, d, e;

    std::cout << "Informe um numero com  digitos: ";
    std::cin >> n;

    a = n % 10;
    b = n % 100;
    b = b / 10;
    c = n % 1000;
    c = c / 100;
    d = n % 10000;
    d = d / 1000;
    e = n % 100000;
    e = e / 10000;

    std::cout << e << "   " << d << "   " << c << "   " << b << "   " << a << std::endl;

    return 0;
}
