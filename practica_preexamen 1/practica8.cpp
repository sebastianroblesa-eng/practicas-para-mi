#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;
    cout << "---Comparador de Numeros---" << endl;
    cout << "Digite el primer numero: ";
    cin >> n1;
    cout << "Digite el segundo numero: ";
    cin >> n2;
    cout << "Digite el tercer numero: ";
    cin >> n3;

    cout << "\nDigite el cuarto numero para comparar: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3){
        cout << "El numero " << n4 << "coincide con alguno de los anteriores!" << endl;
    } else {
        cout << "El número " << n4 << " no coincide con ninguno." << endl;
    }

    return 0;
}