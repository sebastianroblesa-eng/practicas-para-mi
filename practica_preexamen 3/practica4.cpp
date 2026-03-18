#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe se mayor a 0." << endl;
        return 1;
    }
    srand(time(0));
    long long suma = 0;
    int mayor, menor;

    for (int i = 0; i < n; ++i) {
        int num = (rand() % 1000) + 1;
        suma += num;

        if (i == 0) {
            mayor = num;
            menor = num;
        } else {
            if (num > mayor) mayor = num;
            if (num < menor) menor = num;
        }
    }
    double promedio = static_cast<double>(suma) / n;

    cout << "\n--- Resultados ---" << endl;
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;
    return 0;
}