//Compara valores com o if
#include <iostream> //Pré processamento  de entrada e saída

using std::cout; //para utilização de cout
using std::cin; //para utilização de cin
using std::endl; //para undilização de endl

int main(){
    int a, b;

    cout << "Informe dois numeros: ";
    cin >> a >> b;

    if(a == b)
       cout << a << " == " << b << endl;

    if(a != b)
        cout << a << " != " << b << endl;

    if(a < b)
        cout << a << " < " << b << endl;

    if(a > b)
        cout << a << " > " << b << endl;

    if(a <= b)
        cout << a << " <= " << b << endl;

    if(a >= b)
        cout << a << " >= " << b << endl;

    return 0;
}
