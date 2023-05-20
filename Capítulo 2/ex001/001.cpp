//Criacao de classe

#include <iostream> //Pre processamento de entrada e saida

using std::cout;
using std::endl;

//Definicao de classe
class LivroNotas {
public:

    //Funcao que exibe mensagem
    void mostrarMensagem(){
        cout << "Seja Bem-vindo ao Livro de Notas!" << endl;
    }
};

int main(){

    LivroNotas meuLivroNotas; //Cria um objeto
    meuLivroNotas.mostrarMensagem(); //Chama a mensagem

    return 0;
}
