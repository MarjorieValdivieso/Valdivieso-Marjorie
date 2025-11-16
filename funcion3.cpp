#include <iostream>
using namespace std;
//Marjorie Valdivieso
//Ingresa 4 calificaciones y muestras 
//muestra las notas almacenadas en el arreglo
void mostrarNotas(int arr[]) {
    cout << "Las notas ingresadas son:"<<endl;
    for(int i = 0; i < 4; i++) {//recorre el arreglo
        cout << arr[i]<<endl ;
    }
}

int main() {
    int arreglo[4];

    for(int i = 0; i < 4; i++){
        cout << "Ingresa 4 calificaciones " << ": ";
        cin >> arreglo[i];//almacena la nota del arreglo
    }

    mostrarNotas(arreglo);

    return 0;
}
