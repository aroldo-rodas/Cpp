//Soma de inteiros
#include <iostream> //Pr� processamento para entrada e sa�da de dados

int main(){
    int n1, n2, soma;

    // std � o espa�o de nomes padr�o da linguagem
    std::cout<<"Digite o primeiro numero: "; //obt�m a string
    std::cin>>n1;   //fornece

    std::cout<<"Digite o segundo numero: "; //O >> � o operador de inser��o de fluxo
    std::cin>>n2;

    soma = n1 + n2;

    std::cout<<"O resuldado da soma eh: " <<soma <<std::endl;

    return 0;
}
