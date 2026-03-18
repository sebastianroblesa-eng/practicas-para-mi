#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "---Determinador de par o impar---" << endl;

    cout << "Digite un numero entero: ";
    cin >> numero;
    if(numero == 0){
        cout << "El numero es cero (tecnicamente es par)" << endl;
    }
    if (numero % 2 == 0){
        cout << "El numero es par" << endl;
    } else{
        cout << "El numero es impar" << endl;
    }
    return 0;
}