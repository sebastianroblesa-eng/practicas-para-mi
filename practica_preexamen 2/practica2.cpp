#include <iostream>

using namespace std;

bool Esprimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() { 
    int numero;
    int sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;

    cout << "Introduce numeros entre 1 al 100 (0 pra terminar): " << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break;
        }
    if (numero < 0 || numero > 100) {
        cout << "Numero fuera de rango. Intenta con un numero entre el 1 al 100." << endl;
        continue;
    }
    
    sumaTotal += numero;
    if (numero % 2 == 0 ){
        sumaPares += numero;
    } else {
        sumaImpares += numero;
    }
    if (Esprimo(numero)){
        sumaPrimos += numero;
    }
}
    cout << "\n--- Resultados Finales ---" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Suma de primos: " << sumaPrimos << endl;

    return 0;
}