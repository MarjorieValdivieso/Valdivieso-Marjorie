#include<iostream>
using namespace std;
//Marjorie Valdivieso
//lee los elementos de un arreglo de 5 números enteros mediante una función que use paso por referencia, calcule la suma total de los elementos.Elegir eliminar un dato según el ingreso por teclado
void calcularSumma(int arr[],int &suma){
	suma=0;
	for(int i=0;i<5;i++){
		suma+=arr[i];//suma cada elemento del arreglo
	}
}
void eliminarnum(int arr[], int num){
	for(int i=0;i<5;i++){
		if (arr[i]==num){//encuentra el numero ingresado
			arr[i]=0;//remplza por cero
			cout<<"El numero se ah eliminado"<<endl;
			return;//sale de la funcion despues de eliminar
	}
}
cout<<"El valor no existe";


}
void mostrar(int arr[]){
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;//imprime cada elemento
	}
	cout<<endl;
}
int main(){
	int arreglo[5];
	cout<<"Ingresa 5 numeros";
	for(int i=0;i<5;i++){//llena el arreglo
		cin>>arreglo[i];
	}
	int suma;
	calcularSumma(arreglo, suma);//calcula la suma
	cout<<"La suma de los numeros es: "<<suma<<endl;
	int num;
	cout<<"Ingrese el num que quiere eliminar"<<endl;
	cin>>num;
	eliminarnum(arreglo, num);
	cout<<"El arreglo final"<<endl;
	mostrar(arreglo);
	return 0;
	
	
}
