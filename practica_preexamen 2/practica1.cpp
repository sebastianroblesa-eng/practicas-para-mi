#include <iostream>

using namespace std;

int main() {
    int numero;
    do {
        cout << "Introduce el numero entero (1-10): ";
        cin >> numero;
        if (numero < 1 || numero > 10){
            cout << "Error: el numero debe estra entre el 1 y el 10. Intentalo de nuevo " << endl;
        }
    } while (numero < 1 || numero > 10);
    cout << "\nTabla de multiplicar del " << numero << ":" << endl;
    cout << "----------------" << endl;

    for(int i = 1; i <= 10; i++) {
        cout << numero << "x" << i << "=" << (numero * i) << endl;
    }
    cout << "----------------" << endl;

    return 0;
}