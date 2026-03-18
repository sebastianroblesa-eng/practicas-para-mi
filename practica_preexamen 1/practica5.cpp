#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese el numero del cateto1: ";
    cin >>  cateto1;
    cout << "Ingrese el numero del cateto2: ";
    cin >>  cateto2;    
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "\n---------------" << endl;
    cout << "La hipotenusa es: " << hipotenusa << endl;
    cout << "---------------" << endl;

    return 0;

}