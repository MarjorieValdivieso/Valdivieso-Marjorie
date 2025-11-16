#include <iostream>
using namespace std;
//Marjorie Valdivieso
//parametros de valor multiplicar cada elemento ingresado no alterar el arreglo original


void multiplicar(int arr[], int tamanio, int numero){
    cout << "Resultados de la multiplicacion:"<<endl;
    for(int i = 0; i < tamanio; i++){//recorre cada numero y hace la multiplicacion
        cout << arr[i] << " * " << numero << " = " << arr[i] * numero << endl;
    }
}

int main() {
    int tamanio;

    cout << "Cuantos numeros desea ingresar?: ";
    cin >> tamanio;

    int arreglo[tamanio];

    cout << "Ingrese los " << tamanio << " numeros:"<<endl;
    for(int i = 0; i < tamanio; i++){//arreglo definido por el usuario
        cin >> arreglo[i];
    }

    int numero;
    cout << "Ingrese el numero con el que desea multiplicar: ";
    cin >> numero;

    multiplicar(arreglo, tamanio, numero);//llama a la funcion de la multiplicacion

    cout << "Arreglo original :"<<endl;
    for(int i = 0; i < tamanio; i++){//muestra el arreglo original
        cout << arreglo[i] <<endl;
    }
    cout << endl;

    return 0;
}
