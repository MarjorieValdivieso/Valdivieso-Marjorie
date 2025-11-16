#include <iostream>
using namespace std;
//Maejorie Valdivieso
//Ingresa 5 numeros a un arreglo y luego muestra el arreglo
//muestra los elemnetos de un arreglo
void mostrarArreglo(int arr[]) {
    cout << "Los numeros ingresados son:"<<endl;
    for(int i = 0; i < 5; i++) {//recorre el arreglo desde la posicion 0 a 4
        cout << arr[i] << endl;//muestra los elementosd del arreglo
    }
}

int main() {
    int arreglo[5];
//llena el arreglo con los numeros ingresados 
    for(int i = 0; i < 5; i++){
        cout << "Ingresa 5 numeros " << i+1<<":";
        cin >> arreglo[i];
    }
    mostrarArreglo(arreglo);

    return 0;
}
