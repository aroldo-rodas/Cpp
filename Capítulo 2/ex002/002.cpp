//Usando parametro na funcao

#include <iostream> //Pre-processamento de entrada e saidas
using std::cout;
using std::cin;
using std::endl;

#include <string> //Classe padrao para string
using std::string;
using std::getline;

//Criando a classe
class BemVindo {
public:
    void mensagem(string CursoNome) {
        cout << "Seja bem-vindo ao curso de " << CursoNome << endl;
    }

};


int main() {

    string nomeDoCurso; //string de caracteres
    BemVindo cursoBemVindo; //criando um objeto BemVindo chamado cursoBemVindo

    cout << "Informe o nome do curso: ";
    getline(cin, nomeDoCurso); //Le o nome com os espacos em branco

    system("cls"); //limpeza do cmd

    //chama a funcao mensagem do objeto cursoBemVindo
    cursoBemVindo.mensagem(nomeDoCurso);

    return 0;
}

