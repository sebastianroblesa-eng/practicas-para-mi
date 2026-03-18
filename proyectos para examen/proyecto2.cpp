#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double Geberarprecio() {
    return 20.0 + (rand () % 31);
} 
double CalcularIva(double monto) {
    return monto * 0.13;
}
double AplicarDescuento (double monto) {
    if (monto > 2500) {
        return monto * 0.05;
    }
    return 0.0;
} 
int main(){
    srand(time(0));

    int n;
    cout << "Ingrese la cantidad de productos de hoy: ";
    cin >> n;

    double totalBruta = 0;

    for (int i = 0; i <= n; i++)
    {
        totalBruta += Geberarprecio();
    }
    
    double MontoIva = CalcularIva(totalBruta);
    double descuento = AplicarDescuento(totalBruta);
    double montoFinal = totalBruta - descuento;

    cout << "\n---Resumen diario---" << endl;
    cout << "Suma total de ventas: " << totalBruta << "Bs" << endl;
    cout << "Iva (13%) a pagar: " << MontoIva << "Bs" << endl;
    cout << "Descuento Aplicado: " << descuento << "Bs" << endl;
    cout << "Monto final neto: " << montoFinal << "Bs" << endl;

    return 0;
}