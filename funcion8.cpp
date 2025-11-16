#include <iostream>
#include <iomanip>  
using namespace std;
//Marjorie Valdivieso
//calcular el promedio de un arreglo que el resultado debe ser con dos decimales

double calcularPromedio(int arr[], int tamanio) {
    int suma = 0;//inica la suma en cero

    for(int i = 0; i < tamanio; i++){
        suma += arr[i];//recorre los elementos y suma
    }

    double promedio = (double)suma / tamanio;

    return promedio;  //devuelve el promedio
}

int main(){
    int tamanio;

    cout << "Cuantos numeros desea ingresar? ";
    cin >> tamanio;

    int arreglo[tamanio];

    cout << "Ingrese los " << tamanio << " numeros:" << endl;
    for(int i = 0; i < tamanio; i++){//llena el arreglo
        cin >> arreglo[i];
    }

    double promedio = calcularPromedio(arreglo, tamanio);

    cout << fixed << setprecision(2);//muestra los 2 decimales 
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
