#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    int n = (rand() % 10) +1 ;
    long long factorial = 1;
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "El numero aletorio generadodo es: " << n << endl;
    cout << "Su factorial (" << n << "!) es: " << factorial << endl;
    return 0;
}