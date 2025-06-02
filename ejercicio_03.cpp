#include <iostream>
using namespace std;
//prototipo
void fibonacci(int n,int &suma);

int main() {
    int n, suma = 0;
    cout << "Ingrese la cantidad de la serie: ";
    cin >> n;

    fibonacci(n, suma);

    cout << "Suma total: " << suma << endl;//funcional
    return 0;
}

void fibonacci(int n,int &suma) {
    int a = 0, b = 1, temp;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        suma = suma + a;
        temp = a + b;
        a = b;
        b = temp;
    }
    
    cout << endl;
}
