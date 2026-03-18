#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "---Determinador de Par o Impar--- " << endl;

    cout << "Digite un numero entero: ";
    cin >> numero;

    if(numero == 0 ) {
        cout << "El numero es cero (tecnicamente par). " << endl;
    }
    else if (numero % 2 == 0) {
        cout << "El numero " << numero << "es par." << endl; 
    }
    else {
        cout << "El numero " << numero << "es impar." << endl; 
    }

    return 0;
}