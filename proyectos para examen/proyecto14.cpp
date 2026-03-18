#include <iostream>
using namespace std;
int Encontrarmayor(int n1, int n2, int n3);
int main(){
    int a, b, c;

    cout << "---Buscador del numero mayor---" << endl;

    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Introduce el tercero numero: ";
    cin >> c;

    int mayor = Encontrarmayor(a,b,c);

    cout << "\n El mayor de los tres ingresados es: " << mayor << endl;
    return 0;
}
int Encontrarmayor(int n1, int n2, int n3){
    int max;
    if (n1 >= n2 && n1 >= n3){
        max = n1;
    } else if (n2 >= n1 && n2 >= n3){
        max = n2;
    } else {
        max = n3;
    }

    return max;
}