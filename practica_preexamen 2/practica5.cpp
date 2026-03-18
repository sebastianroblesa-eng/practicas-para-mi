#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int Numeroaleatorio = rand() % 100 + 1;
    int suposicion = 0;
    int intentos = 0;

    cout << "---Juego adivina el numero---" << endl;
    cout << "He pensado un numero entre 1 y 100. ¡Intenta adivinarlo!" << endl;

    do{
        cout << "Introduce tu numero: ";
        cin >> suposicion;
        intentos++;
        
        if (suposicion > Numeroaleatorio){
            cout << "Elnumero secreto es Menor." << endl;
        } else if(suposicion < Numeroaleatorio){
            cout << "Elnumero secreto es Mayor." << endl;
        } else {
            cout << "Felicidades has adivinado el numero." << endl;
            cout << "Te tomo " << intentos << " intentos conseguirlo." << endl;
        }
        } while (suposicion != Numeroaleatorio);

        return 0;
        
    }