//ejercicio_06
#include <iostream>
using namespace std;

bool primo(int n);

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (primo(n))
        cout << "Es primo." << endl;
    else
        cout << "No es primo." << endl;

    return 0;
}
//funciona booleana devuelve verdadero falso
bool primo(int n) {
    int divisores = 0;
    
    if (n < 2) {
        return false;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    if (divisores == 2)
        return true;  // primo
    else
        return false; // no primo
}

