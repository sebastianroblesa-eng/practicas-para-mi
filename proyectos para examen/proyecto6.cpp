#include <iostream>
using namespace std;
int main () {
    int edad;

    cout << "---Verificador de edad---" << endl;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25){
        cout << "La edad de: " << edad << "Esta en el rango permitido" << endl;
    } else {
        cout << "La edad de: " << edad << "No esta en el rango permitido" << endl;
    }
    return 0;
}
