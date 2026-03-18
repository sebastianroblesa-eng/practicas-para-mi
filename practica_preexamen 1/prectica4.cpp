#include <iostream>

using namespace std;

int main() {
    double practica, teoria, participacion, notaFinal;
    cout << "----Calculo de Nota Final---" << endl;
    
    cout << "Ingrese la nota de practicas (30%): ";
    cin >> practica;
    cout << "Ingrese la nota de teotia (60%): ";
    cin >> teoria;
    cout << "Ingrese la nota de participacion (10%): ";
    cin >> participacion;
    
    notaFinal = (practica * 0.30) + (teoria * 0.60) + (participacion * 0.10);

    cout << "\n------------------" << endl;
    cout << "La nota final del estudiante es: " << notaFinal << endl;
    cout << "------------------" << endl;

    return 0;
}    
