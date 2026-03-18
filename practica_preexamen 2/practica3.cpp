#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;
    
    cout << "Introduce el valor de n: ";
    cin >> n;

    for(int i = 1; i <=n; i++) {
        suma += i;
    }
    cout << "La sema de 1 hasta" << n << "es:" << suma << endl;
    
    return 0;
}