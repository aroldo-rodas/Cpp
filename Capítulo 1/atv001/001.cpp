//Obt�m os dois n�meros do usu�rio e imprime a soma, produto, diferen�a e quociente dos dois n�meros

#include <iostream> //Pr�-processamento entrada e sa�da de dados

using std::cout;
using std::cin;
using std::endl;

int main(){
    float x, y, soma, produto, diferenca, divisao;

    cout << "Informe dois numeros: ";
    cin >> x >> y;

    soma = x + y;
    cout << "A soma de " << x << " e " << y << " eh: " << soma << endl;

    produto = x * y;
    cout << "O produto de " << x << " e " << y << " eh: " << produto << endl;

    diferenca = x - y;
    cout << "A diferenca de " << x << " e " << y << " eh " << diferenca << endl;

    divisao = x / y;
    cout << "A divisao de " << x << " e " << y << " eh: " << divisao << endl;

    return 0;
}
