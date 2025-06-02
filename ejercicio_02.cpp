//ejercicio_02
#include <iostream>
using namespace std;

int cociente(int mayor, int menor);
int resto(int mayor, int menor);

int main(){
    int num1, num2;
    cout << "ingrese 2 numeros enteros: ";
    cin >> num1 >> num2;
    int mayor, menor;

    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    }else {
        mayor = num2;
        menor = num1;
    }

    cout << "Cociente: " << cociente(mayor, menor) << endl;
    cout << "Resto: " <<resto(mayor, menor) << endl;
    return 0;
}

int cociente(int mayor, int menor) {
    int c = 0;
    while (mayor >= menor) {
        mayor -=menor;
        c++;
    }
    return c;
}

int resto(int mayor, int menor) {
    while (mayor >= menor) {
        mayor -= menor;
    }
    return mayor;
}
