#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0;

    cout << "---Verificador de numeros Perfectos---" << endl;
    cout << "Ingresas un numero positovo: ";
    cin >> numero;

    if(numero < 0) {
        cout << "Por favor, ingresa un numero mayor a 0." << endl;
        return 1;
    }
    for(int i = 1; i <= numero/2; i++){
        if (numero % i == 0){
            suma += i;
        }
    }
    if (suma == numero){
        cout << numero << "es un numero perfecto." << endl;
    } else {
        cout << numero << "no es un numero perfecto." << endl;
    }
    return 0;
}