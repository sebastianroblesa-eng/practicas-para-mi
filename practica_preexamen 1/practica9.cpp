#include <iostream>
#include <vector>

using namespace std;

struct Romanos {
    int valor;
    string simbolo;
};

int main() {
    int numero;
    cout << "--- Conversor Profesional a Romanos ---" << endl;
    cout << "Digite un número: ";
    cin >> numero;

    if (numero <= 0 || numero > 1000000) {
        cout << "Fuera de rango." << endl;
        return 0;
    }

    vector<Romanos> tabla = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    cout << "Resultado: ";
    for (int i = 0; i < tabla.size(); i++) {
        while (numero >= tabla[i].valor) {
            cout << tabla[i].simbolo;
            numero -= tabla[i].valor;
        }
    }
    cout << endl;

    return 0;
}
