#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    
    // Ingresar array de 15 posiciones
    int arr[TAM];
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
    
    // Calcular suma de elementos impares
    int sumImpares = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (arr[i] % 2 != 0) {
            sumImpares += arr[i];
        }
    }
    
    cout << "Suma de los valores impares: " << sumImpares << endl;
    
    return 0;
}
