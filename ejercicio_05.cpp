//ejercicio_05
#include <iostream>
using namespace std;

int suma_dividores(int n);


int main() {
    int a, b;
    cin >> a >> b;

    if (suma_dividores(a) == b && suma_dividores(b) == a)
        cout << "Amigos." << endl;
    else
        cout << "No amigos." << endl;

    return 0;
}

int suma_dividores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            suma = suma + i;
    }
    return suma;
}

