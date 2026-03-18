#include <iostream>
using namespace std;
float CalcularPromedio(float nota1, float nota2);
int main(){
    float n1, n2;

    cout << "---Generador de notas---" << endl;
    cout << "Ingrese la primara nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    float promedio = CalcularPromedio(n1, n2);
    cout << "\nEl promedio final es:" << promedio << endl;

    if(promedio >= 51){
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    return 0;
}

float CalcularPromedio(float nota1, float nota2){
    return (nota1 + nota2) / 2;
}