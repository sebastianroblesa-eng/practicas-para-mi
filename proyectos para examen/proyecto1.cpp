#include <iostream>
using namespace std; 

int main(){
    int num, suma=0;

    cout << "---Verificador de numeros primos---" << endl;
    cout << "ingresa un numero: ";
    cin >> num;

    if(num <= 0){
    cout << "Porfa ingrese un numero mayor a cero" << endl;
    return 1;
    }
    for (int i = 1; i <= num/2; i++)
    {
     if(num % i == 0){
        suma += i;
     }
    }
    if(num == suma){
        cout << "El numero es perfecto" << endl;
    } else{
        cout << "Elnumero no es perfecto" << endl;
    }
    return 0;
}