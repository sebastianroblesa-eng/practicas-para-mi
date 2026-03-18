#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Generador de series" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1 == num2){
        cout << "Los numeros deben estar entre si" << endl;
        return 1;
    }

    cout << "Serie generada: " << endl;
    if (num1 > num2) {
        for (int i = num1; i < num2; i--)
        {
            cout << i << ""; 
        } 
        } else {
            for (int i = num1; i < num2; i++)
            {
                cout << i << "";
            }
            
        }
        cout << endl;
        return 0;
}