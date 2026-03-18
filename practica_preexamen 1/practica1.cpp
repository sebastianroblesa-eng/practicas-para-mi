#include <iostream>
using namespace std;

int main(){
    double num1, num2;

    cout << "--- Calculadora Basica ---" << endl;

    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    cout << "\n---Resultados---" << endl;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Mutiplicacion: " << num1 * num2 << endl;

    if(num2 != 0) {
        cout << "Division: " << num1 / num2 << endl; 
    } else {
        cout << "Division error (no se puede dividir en cero)" << endl;
    }
    return 0;
}
