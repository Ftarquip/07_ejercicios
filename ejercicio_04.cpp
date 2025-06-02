//ejercicio_04
#include <iostream>
using namespace std;
int perfecto(int num);
int main(){
    int num;
    cin >> num;
    if(perfecto(num)==num){
        cout <<"El numero es perfecto";
    }else{
        cout <<"El numero no es perfecto";
    }
    return 0;
}
int perfecto(int num){
    int suma = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            suma += i;
    }
    return suma;
}