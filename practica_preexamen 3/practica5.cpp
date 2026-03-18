#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros (N) a generar: ";
    cin >> n;

    if (n <= 0) {
        cout << "N debe ser mayor a 0." << endl;
        return 1;
    }

    srand(time(0));
    int contadorPrimos = 0;

    cout << "\nNumeros generados:" << endl;
    for(int i = 0; i < n; i++){
        int num =(rand() % 10000) +1;
        cout << num << (i == n - 1 ?"":",");

        bool esPrimo = true;
        if(num <= 1){
            esPrimo = false;
        } else{
            for (int j = 2; j * j <= num; ++j) {
                if (num % j == 0){
                    esPrimo = false;
                    break;
                }
        }
    }
    if (esPrimo){
        contadorPrimos++;
    }
    cout << "\n\nTotal de numeros primos encontrados: " << contadorPrimos << endl;
    return 0;
}
}