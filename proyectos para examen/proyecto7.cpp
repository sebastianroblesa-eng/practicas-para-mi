#include <iostream>
using namespace std;

bool esPrimo (int n){
    if(n < 2) 
    return false;
    for (int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}
int main(){
    int numero;
    int sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;

    cout << "Introduce numeros entre el 0 al 100 (0 para terminar): " << endl;

    do{
        cin >> numero;
        if (numero != 0) {
            if (numero < 0 || numero > 100){
                cout << "Numero fuera de rango, ignora el valor. "<< endl;
                continue;
            }
            sumaTotal =+ numero;
            (numero % 2 == 0) ? (sumaPares += numero): (sumaImpares += numero);
            if(esPrimo(numero)) sumaPrimos += numero;
        }
    } while (numero != 0);
    cout << "\nResultados:" << endl;
    cout << "Suma total: " << sumaTotal << "\nSuma pares: " << sumaPares << "\nSuma impares: " << sumaPrimos << "\nSuma primos: " << sumaPrimos << endl;
    return 0;
}