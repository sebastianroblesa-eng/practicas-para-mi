#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "---Verificador de edad ---" << endl; 

    cout << "Inreoduce tu edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "La edad " << edad << "Esta en el rango de [18-25]." << endl; 
    } else {
        cout << "La edad " << edad << "No esta en el rango permitido." << endl; 
    }

    return 0;
}
