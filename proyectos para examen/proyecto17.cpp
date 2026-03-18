#include <iostream>
using namespace std;
int Calcularsumatorio(int n);
int main (){
    int limite;

    cout << "---Caluladora de sumatoria (1-N)---" << endl;
    cout << "Ingrese el numero entero positivo";
    cin >> limite;

    if (limite <= 0){
        cout << "Porfa, ingrese un numero mayor a 0." << endl;
    } else {
        int resultado = Calcularsumatorio(limite);
        cout << "La sumatoria de enteros es desde 1 hasta " << limite << "es:" << resultado;
    }
    return 0;
}
int Calcularsumatorio(int n){
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + i;
    }
    return suma;
}
