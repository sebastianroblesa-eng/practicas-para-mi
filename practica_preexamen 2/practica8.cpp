#include <iostream>

using namespace std;

int main() {
    int n,i;
    double precio, Sumatotal = 0, MontoconIva, Montofinal;

    const double Iva_Porcentaje = 0.13;
    const double Desacuanto_Porcentaje = 0.05;

    cout << "---Sistema de ventas La Estrella---" << endl;
    cout << "Ingrese la cantidad de productos vendidos de hoy: ";
    cin >> n;

    for(i= 1; i<= n; i++){
        cout << "Ingrese el precio del producto " << i << ":";
        cin >> precio;
        Sumatotal += precio;
    }
    MontoconIva = Sumatotal * (1 + Iva_Porcentaje);
    Montofinal = MontoconIva;

    if(Montofinal > 2500){
        Montofinal = Montofinal - (Montofinal * Desacuanto_Porcentaje);
        cout << "\n¡Descuento del 5% aplicado por superar los 2500 Bs!" << endl;
    }

    double pagoIva = Sumatotal * Iva_Porcentaje;
    cout << "\n--- Resumen del Dia ---" << endl;
    cout << "Total ventas (base): " << Sumatotal << " Bs" << endl;
    cout << "IVA (13%) a pagar: " << pagoIva << " Bs" << endl;
    cout << "Monto final a cobrar: " << Montofinal << " Bs" << endl;

    return 0;
}
