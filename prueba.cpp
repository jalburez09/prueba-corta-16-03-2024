#include <iostream>
#include <vector>
using namespace std;

//ejercicio 1
/*int main() {
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
    }*/

//segundo ejercicio//


/*vector<int> miVector = {10, 20, 30, 40, 50};

int numero;
cout << "Ingrese un numero: ";
cin >> numero;

bool encontrado = false;
int posicion = -1;

for (int i = 0; i < miVector.size(); ++i) {
if (miVector[i] == numero) {
encontrado = true;
posicion = i;
break;
}
}

if (encontrado) {
cout << "El número " << numero << " está presente en el vector en la posición " << posicion << ".\n";
} else {
std::cout << "El número " << numero << " no se encuentra en el vector.\n";
}*/

//ejercicio 3//



int n;
std::cout << "Ingrese la cantidad de números: ";
std::cin >> n;


std::vector<int> numeros;


for (int i = 0; i < n; ++i) {
int num;
cout << "Ingrese el número " << i + 1 << ": ";
cin >> num;
numeros.push_back(num);
}


std::sort(numeros.begin(), numeros.end());

auto it = std::unique(numeros.begin(), numeros.end());
numeros.erase(it, numeros.end());


std::cout << "Números únicos en el vector:" << std::endl;
for (int num : numeros) {
    cout << num << " ";
}
cout << std::endl;


    return 0;
}