#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int n;
    cout << "Ingrese la cantidad de numeros (N) a generar: ";
    cin >> n;

    if(n <= 0){
        cout << "El numero deber mayor " << endl;
        return 1;
    }
    srand(time(0));
    int contadorPrimos = 0;

    cout << "\nNumeros generados " << endl;
    for (int i = 0; i <= n; i++)
    {
        int num = (rand() % 1000) +1;
        cout << num << (i == n -1 ? "": ",");
        
        bool Esprimo = true;
        if(num <= 1){
            Esprimo = false;
        } else {
            for (int j = 2; j <= num; j++)
            {
                if (num % j == 0){
                    Esprimo = false;
                    break;
                }
            }
            
        }
        if (Esprimo){
            contadorPrimos++;
        }
        cout << "nTotal de numeros primos encontrados: " << contadorPrimos << endl;
        return 0; 
    }
    
}