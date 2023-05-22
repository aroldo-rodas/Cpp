//utilizando construtar na classe para sua inicializacao

#include <iostream> //Pre-processamento de entrada e saida
using std::cout;
using std::cin;
using std::endl;

#include <string> //Classe de string padrao do c
using std::string;

class GradeBook {
public:

    //construtor inicializa courseName com a strinf fornecida como argumento
    Gradebook(string name) {
        setCourseName(name);
    }

    //funcao para configurar o nome do curso
    void setCourseName(string name){
        courseName = name;
    }

    //retorna o nome do curso
    string getCourseName() {

        return courseName;
    }

    //exibe a mensagem de boas vindas
    void displayMessage() {
        cout << "Bem-vindo ao curso de " << getCourseName() << "!" << endl;
    }
private:
    string courseName;
};

int main() {
    GradeBook myGradeBook1;
    GradeBook myGradeBook2;

    cout << myGradeBook1.getCourseName() << endl;
    cout << myGradeBook2.getCourseName() << endl;


    return 0;
}
