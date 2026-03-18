#include <iostream>
using namespace std;
double CalcularSalarioBase(double horas, double tarifa){
    if(horas > 8){
        return 8 * tarifa;
    }
    return horas * tarifa; 
}

double CalcularBonificacion(double horas, double tarifa){
    if (horas > 8){
        double horasExtra = horas - 8;
        return horasExtra = (tarifa * 1.5);
    }
    return 0.0;
}
int main(){
    double horas, tarifa;

    cout << "Ingresa las horas: " << endl;
    cin >> horas;
    cout << "Ingresa la tarifa por hora: ";
    cin >> tarifa;

    double SalarioBase = CalcularSalarioBase(horas, tarifa);
    double bonificacion = CalcularBonificacion(horas, tarifa);
    double SalarioTotal = SalarioBase + bonificacion;

    cout << "---Resultados del trabajo---" << endl;
    cout << "a. Salario Base: " << SalarioBase << "Bs" << endl;
    cout << "b. Salario Bonificacion: " << bonificacion << "Bs" << endl;
    cout << " Total a recibir " << SalarioTotal << "Bs" << endl;
}