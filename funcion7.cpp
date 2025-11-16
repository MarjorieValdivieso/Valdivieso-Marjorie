#include <iostream>
using namespace std;
//Marjorie Valdicvieso
//cual de los numeros ingresados al arreglo son pares
int contarPares(int arr[], int tamanio){
    int pares = 0;//contador de numeros pares

    for(int i = 0; i < tamanio; i++){
        if(arr[i] % 2 == 0){//verificar el numero si es par
            pares++;//si es par el contador incrementa
        }
    }

    return pares; //devurlve los numeros pares
}

int main(){
    int tamanio;

    cout << "Cuantos numeros desea ingresar?: ";
    cin >> tamanio;

    int arreglo[tamanio];//arreglo definido por el usuario

    cout << "Ingrese los " << tamanio << " numeros:"<<endl;
    for(int i = 0; i < tamanio; i++){
        cin >> arreglo[i];
    }

    int cantidadPares = contarPares(arreglo, tamanio);

    cout << "Cantidad de numeros pares encontrados: " << cantidadPares << endl;

    return 0;
}
