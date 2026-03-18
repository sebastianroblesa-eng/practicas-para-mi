#include <iostream>
using namespace std;
int main() {
    double practica, terorica, participacion, notaFinal;
    cout << "---Contador de notas---" << endl;

    cout << "Ingrese la nota de precticas (30%): ";
    cin >> practica;
    cout << "Ingrese la nota teorica (60%): ";
    cin >> terorica;
    cout << "Ingrese la nota de participacion (10%): ";
    cin >> participacion;

    notaFinal = (practica * 0.30) + (terorica * 0.60) + (participacion * 0.10);

    cout << "\n----------" << endl;
    cout << "La nota final es: " << notaFinal << endl;
    cout << "-------------" << endl;
    return 0;
}