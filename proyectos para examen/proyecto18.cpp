#include <iostream>
using namespace std; 
int ContadorDigitos(int numero);
int main(){
    int num;
    cout << "---Contador de digitos---" << endl;
    cout << "Ingrese un digito: " << endl;
    cin >> num;
    
    if(num <= 0 ){
        cout << "Ingrese un numero mayor." << endl;
    } else {
        int cantidad = ContadorDigitos(num);
        cout << "El numero " << num << "tiene" << cantidad << "digitos" << endl;
    }
    return 0;
}

int ContadorDigitos(int numero){
    int contador = 0;
    if (numero == 0) return 1;

    while(numero > 0){
        numero = numero / 10;
        contador++;
    }
    return contador;
}