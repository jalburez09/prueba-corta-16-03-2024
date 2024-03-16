#include <iostream>

using namespace std;

//ejercicio 1
int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int numeros[n];
    cout << "Ingrese los numeros separados por espacios:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }




    cout<< "Lista ordenada de menor a mayor:\n";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }


    return 0;
}