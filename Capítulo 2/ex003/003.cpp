#include <iostream> //Pre-processamento de dados
using std::cout;
using std::cin;
using std::endl;

#include <string> //Biblioteca string
using std::string;
using std::getline;

class LivroDeNotas {
public:
    //Funcao que configura o nome do curso
    void setNomeDoCurso(string nome) {
        nomeCurso = nome;
    }

    //Funcao que obtem o nome do curso
    string getNomeDoCurso() {

        return nomeCurso;
    }

    //Funcao que exibe a mensagem de boas vindas
    void mostrarMensagem() {
        cout << "Bem vindo ao curso de " << getNomeDoCurso() << "! " << endl;
    }

private:
    string nomeCurso;
};

int main() {
    string nomeDoCurso; //string de caracteres para armazenar o nome do curso
    LivroDeNotas meuLivroDeNotas;

    //Exibe o valor inical do nome do curso
    cout << "O nome do curso: " << meuLivroDeNotas.getNomeDoCurso() << endl;

    //Solicita, insere e configura o valor do nome do curso
    cout << "Informe o nome do curso: " << endl;
    getline(cin, nomeDoCurso);
    meuLivroDeNotas.setNomeDoCurso(nomeDoCurso);

    //Exibe a mensagem de boas vindas
    meuLivroDeNotas.mostrarMensagem();

    return 0;
}
