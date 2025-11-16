#include<iostream>
using namespace std;
//Marjorie Valdivieso/
//con parametros de referencia cual es el valor mayor del arreglo

void mostrararreglo(int &mayor, int tamanio,int arr[]){
	mayor=arr[0];//inicia el mayor con el primer elemento del arreglo
	for(int i=1;i<tamanio;i++){//recorre el arreglo desde el segundo elemento
		if(arr[i]>mayor){
			mayor=arr[i];//actualiza mayor
		}
	}
}
int main(){
	int tamanio;
	cout<<"Cuantos numeros desea ingresar?";
	cin>>tamanio;
	int arreglo[tamanio];
	cout<<"Ingrese los "<< tamanio<< " numeros "<<endl;
	for(int i=0;i<tamanio;i++){//llena el arreglo
		cin>>arreglo[i];
		
	}
	int mayor;
	mostrararreglo(mayor,tamanio,arreglo);
	cout<<"El numero mayor del arreglo es; "<<mayor<<endl;
	return 0;
}
