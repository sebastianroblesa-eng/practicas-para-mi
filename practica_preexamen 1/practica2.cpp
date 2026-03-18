#include <iostream>
using namespace std;

int main(){
    double PrecioOriginal, PrecioFinal;
    const double Iva = 0.13;

    cout << "Ingrese el  precio del producto: ";
    cin >> PrecioOriginal;

    PrecioFinal = PrecioOriginal * (1 + Iva);
    
    cout << "-------------------" << endl;
    cout << "Precio base: " << PrecioOriginal << endl;
    cout << "Iva (13%): " << PrecioOriginal * Iva << endl;
    cout << "Precio Final con IVA: " << PrecioFinal << endl;
    cout << "-------------------" << endl;

    return 0;
}