#include <iostream>

using namespace std;

int main() {
    long n;
    long long factorial = 1;
    long long Sumatotal = 0;

    cout << "Introduce el valor de n para la suma de factoriales: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no esta definido por numeros negativos" << endl;
        return 1;
    }
    for (int i =1; i<= n; i++) {
        factorial *= i;
        Sumatotal += factorial;
        cout << i << "!=" << factorial << endl;
    }
    cout << "\nLa suma total de los factoriales desde 1! hasta " << n << "! es:" << Sumatotal << endl;

    return 0;
}
