//ejercicio 01 funciones
#include <iostream>
using namespace std;
// Prototipos de funciones
void resta(int val1, int val2);
int producto(int val1, int val2);
int suma(int val1, int val2);
int division(int val1, int val2);

int main() {
    int num1, num2, resultado;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    resta(num1, num2);
    resta(num2, num1);

    resultado = producto(num1, num2);
    cout << "\nLa multiplicacion de " << num1 << " por " << num2 << " es: " << resultado << endl;

    resultado = suma(num1, num2);
    cout << "\nLa suma de " << num1 << " + " << num2 << " es: " << resultado << endl;

    resultado = division(num1, num2);
    if (num2 != 0) {
        cout << "\nLa division de " << num1 << " entre " << num2 << " es: " << resultado << endl;
    }

    return 0;
}

void resta(int val1, int val2) {
    int sustrac = val1 - val2;
    cout << "\nLa resta de " << val1 << " - " << val2 << " es: " << sustrac << endl;
}

int producto(int val1, int val2) {
    int prod = val1 * val2;
    return prod;
}

int suma(int val1, int val2) {
    return val1 + val2;
}

int division(int val1, int val2) {

    return val1 / val2;
}
