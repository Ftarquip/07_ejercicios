//ejercicio_07
#include <iostream>
using namespace std;
//prototipos
int mcd(int a, int b);
int mcm(int a, int b);

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2; 
    cout <<"El MCD de "<< num1 << " y " << num2 << " es " << mcd(num1, num2) << endl;
    cout <<"El MCM de "<< num1 << " y " << num2 << " es " << mcm(num1, num2) << endl;

    return 0;
}

int mcd(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}
