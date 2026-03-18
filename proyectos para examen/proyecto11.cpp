#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    int num;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> num;

    if (num <= 0){
        cout << "El numero debe ser mauor que 0" << endl;
        return 1;
    }
    srand(time(0));
    long long suma;
    int mayor, menor;
    for (int i = 0; i <= num; i++)
    {
        int n = (rand () % 1000);
        suma += n;

        if(i == 0){
            mayor = n;
            menor = n; 
        } else {
            if(n > mayor) mayor = n;
            if(n < menor) menor = n; 
        }
    }
    double promedio = suma / num;

    cout << "\n--- Resultados ---" << endl;
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;
}