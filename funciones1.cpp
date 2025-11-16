#include<iostream>
using namespace std;
//Marjorie Valdivieso
//Una tienda aplica descuentos a un producto antes de venderlo al cliente.Al precio base se le aplican dos tipos de descuentos:• Descuento por promoción 15%• Descuento por cliente frecuente 10%
// descuento 
double calcularDescuento(double precio, double porcentaje){
    return precio * (porcentaje / 100.0);
}
double calcularPrecioFinal(double precioBase) {

    // Descuento 15
    double descPromo = calcularDescuento(precioBase, 15);

    // Descuento 10
    double descCliente = calcularDescuento(precioBase, 10);

    // Precio final 
    double precioFinal = precioBase - descCliente - descPromo;

    // Mostrar cada descuento
    cout << "Descuento por promocion (15%): " << descPromo << endl;
    cout << "Descuento por cliente frecuente (10%): " << descCliente << endl;

    return precioFinal;
}

int main(){
    double precioBase, precioFinal;

    cout << "Ingrese el precio del producto: ";
    cin >> precioBase;

    precioFinal = calcularPrecioFinal(precioBase);

    // Mostrar el resultado final
    cout << "El precio final del producto es: $" << precioFinal << endl;

    return 0;
}
