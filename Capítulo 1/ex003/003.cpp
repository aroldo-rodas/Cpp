//Compara valores com o if
#include <iostream> //Pr� processamento  de entrada e sa�da

using std::cout; //para utiliza��o de cout
using std::cin; //para utiliza��o de cin
using std::endl; //para undiliza��o de endl

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
