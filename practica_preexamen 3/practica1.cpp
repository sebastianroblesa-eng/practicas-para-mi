#include <iostream>
#include <ctime>   
#include <cstdlib> 

int main() {
    int n;
    std :: cout << "Ingrese la cantidad de lanzaminetos: ";
    std :: cin >> n;

    std :: srand(static_cast < unsigned int > (std :: time(0)));
    int Contadorpares = 0;

    for(int i = 0; i < n; i++){
        int resultado = (std :: rand() % 6) +1;

        if(resultado % 2 == 0) {
            Contadorpares++;
        }
    }
    double frecuancia = static_cast < double > (Contadorpares) /n;

    std::cout << "\nResultados:" << std::endl;
    std::cout << "Total de lanzamientos: " << n << std::endl;
    std::cout << "Veces que salio par: " << Contadorpares<< std::endl;
    std::cout << "Frecuencia: " << frecuancia << std ::endl;

    return 0;
}
