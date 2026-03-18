#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> n;

    if (n <= 0){
        cout << "El numero debe ser mayor a 0." << endl;
        return 1;
    }
    srand(time(0));

    int caras = 0;
    int cruces = 0;

    for (int i = 0; i < n; ++i){
        if(rand () %2 == 0){
            caras++;
        } else {
            cruces++;
        }
    }

    double porcCaras = (static_cast<double>(caras) / n ) * 100.0;
    double porcCruzes = (static_cast<double>(cruces) / n ) * 100.0;

    cout << "\n--- Resultados ---" << endl;
    cout << "Caras: " << caras << " (" << porcCaras << "%)" << endl;
    cout << "Cruces: " << cruces << " (" << porcCruzes << "%)" << endl;

    return 0;
}