#include <iostream>
using namespace std;
int main(){
    double precioOriginal, precioFinal;
    double Iva = 0.13;

    cout << "Ingrese el precio original: ";
    cin >> precioOriginal;

    precioFinal = precioOriginal * (1 + Iva);

    cout << "----------" << endl;
    cout <<"Precio Base" << precioOriginal << endl;
    cout << "Iva (13%)" << precioOriginal * Iva << endl;
    cout << "Precio final con Iva" << precioFinal << endl;
    cout << "-----------" << endl;
    return 0;
}