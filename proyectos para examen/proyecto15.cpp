#include <iostream>
using namespace std;
float convertir (float montoBs, float tipoCambio);
int main(){
    float monto;
    float oficial = 6.96;
    float paralelo = 9.10;
    int opcion;

    cout << "----Cambio de bolivianos oficial a paralelo: " << endl;

    cout << "Introduce el monto en bs: ";
    cin >> monto;

    cout << "Seleccionar el tipo de cambio" << endl;
    cout << "1. Oficial (6.96)" << endl;
    cout << "2. Paralelo (9.10)" << endl;
    cout << "Opcion";
    cin >> opcion;

    float resultado;
    if (opcion == 1) {
        resultado = convertir(monto, oficial);
    } else if (opcion == 2){
        resultado = convertir(monto, paralelo);
    } else {
        cout << "Opcion no valida" << endl;
        return 1;
    }
    cout << "\n El resultado de la conversion es: $" << resultado << endl;
    return 0;
}
float convertir (float montoBs, float tipoCambio){
    return montoBs / tipoCambio;
}