/*Escreva um programa que insere três inteiros a partir do teclado e
imprime a soma, a média, o produto, o menor e o maior desses números. */

#include <iostream> //Pré processamento de entrada e saída

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n1, n2, n3, soma, media, produto, menor, maior;

    cout << "Entre com tres valores inteiros: \n";
    cin >> n1 >> n2 >> n3;

    soma = n1 + n2 + n3;
    media = (n1 + n2 + n3) / 3;
    produto = n1 * n2 * n3;

    //Maior
    maior = n2;
    if(n1 > n2)
        maior = n1;

    if(maior < n3)
        maior = n3;

    //Menor
    menor = n2;
    if(n1 < n2)
        menor = n1;

    if(menor > n3)
        menor = n3;

    cout << "\nSoma: " << soma << endl; //Soma
    cout << "Media: " << media << endl; //Media
    cout << "Produto: " << produto << endl; //Produto
    cout << "O menor: " << menor << endl; //Menor
    cout << "O maior: " << maior << endl; //Maior

    return 0;
}
