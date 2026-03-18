#include <iostream>
using namespace std;
bool esPar(int numero);
int main(){
    int num;

    cout << "---Verificador numeros pares---" << endl;
    cout << "Ingrese un numero";
    cin >> num;

    if(esPar(num)){
        cout << "El numero" << num << "Es par" << endl;
    } else {
        cout << "El numero " << num << "Es impar" << endl;
    }
    return 0;
}

bool esPar(int numero){
    if(numero % 2 == 0){
        return true;
    } else {
        return false;
    }
}