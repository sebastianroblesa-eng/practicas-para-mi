#include <iostream>

using namespace std;

int main() {
    int edad;
    int sexo;
    int altura;

    cout << "---registro de datos---" << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "\n---Datos Registrado---" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;
   
    return 0;
}