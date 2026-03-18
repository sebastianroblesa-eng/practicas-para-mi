#include <iostream>
using namespace std;

int main(){
    long long n;
    long long factorial = 1;
    long long sumaTotal = 0;

    cout << "Introduce el valor de n para hacer el factorial: ";
    cin >> n;

    if (n < 0 ){
        cout << "el factorial no esta definido por numero negativos" << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sumaTotal += factorial;
        cout << i <<"!=" << factorial << endl;  
    }
    cout << "\nLa suma total de los factoriales desde 1! hasta " << n << "! es:" << sumaTotal << endl;

    return 0;
}