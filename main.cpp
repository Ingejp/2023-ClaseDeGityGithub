#include <iostream>
using namespace std;
void saludar();
void sumar(int a, int b);
float dividir(int a, int b);
float multiplicar(int a, int b);
int main() {
    saludar();
    sumar(5,8);
    cout<< endl;
    cout << dividir(100,4);
    cout<< endl;
    cout << multiplicar(4,8);
    return 0;
}

void saludar(){
    cout << "hola mundo"<<endl;
}

void sumar(int a, int b){
    cout << a+b;
}

float dividir(int dividendo, int divisor){
    return dividendo/divisor;
}

float multiplicar(int multiplicando, int multiplicador){
    return multiplicando*multiplicador;
}
