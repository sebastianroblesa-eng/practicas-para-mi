#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double generadorVentasTotales(){
    return (double) (200 + rand() % 301);
}
double calcularComision(double totalVendido) {
    return totalVendido * 0.10;
}
double CalcularSueldoTotal(double SueldoBase, double comision){
    return SueldoBase + comision; 
}

int main(){
    srand(time(0));
    int n; 
    double SueldoBase; 
    cout << "ingrese la cantidad de vendedores: ";
    cin >> n;
    cout << "Ingrese el sueldo mensual de los vendedores: ";
    cin >> SueldoBase;

    cout << "\n---Reporte de pagos mensuales---" << endl;
    for (int i = 0; i < n; i++)
    {
        double ventas = generadorVentasTotales();
        double comision = calcularComision(ventas);
        double sueldoTotal = CalcularSueldoTotal (SueldoBase , comision);
        
        cout << "\nVendedora #" << i << ":" << endl;
        cout << "- Total Ventas- " << ventas << "Bs" << endl;
        cout << "- Comision " << comision << "Bs" << endl;
        cout << "- Sueldo total a cancelar: " << sueldoTotal << "Bs" << endl;
    }
    return 0;
} 