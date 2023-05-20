//Soma de inteiros
#include <iostream> //Pré processamento para entrada e saída de dados

int main(){
    int n1, n2, soma;

    // std é o espaço de nomes padrão da linguagem
    std::cout<<"Digite o primeiro numero: "; //obtém a string
    std::cin>>n1;   //fornece

    std::cout<<"Digite o segundo numero: "; //O >> é o operador de inserção de fluxo
    std::cin>>n2;

    soma = n1 + n2;

    std::cout<<"O resuldado da soma eh: " <<soma <<std::endl;

    return 0;
}
