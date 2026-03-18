#include <iostream>
#include <ctime>
using namespace std;
int main (){
    srand(time(0));
    int N;

    cout << "ingresa N: ";
    cin >> N;

    int n1 = rand() % (N + 1);
    int n2 = rand() % (N + n1 + 1);
    int n3 = rand() % (N + n1 + n2 + 1);

    int total = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "kids 1 year: " << n1 << endl;
    cout << "kids 2 years: " << n2 << endl;
    cout << "kids 3 years: " << n3 << endl;
    cout << "Total Panales " << total << endl;

    return 0;
}