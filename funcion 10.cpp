#include <iostream>
using namespace std;
//Marjorie Valdivieso
// Desarrolle un programa en C++ que lea: nombre del producto, precio unitario ycantidad. Aplicando descuentos



void cargarDatos(string &producto, double &precio, int &cantidad) {
    cout << "Ingrese el nombre del producto: ";
    cin >> producto;

    cout << "Ingrese el precio unitario: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
}
    //calcula el subtotal
double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}
//calcula el descuento
double descuentoCantidad(double subtotal, int cantidad) {
    if (cantidad == 2)
        return subtotal * 0.10;   
    else if (cantidad >= 3)
        return subtotal * 0.15;   
    else
        return 0;//sin descuento 
}

void aplicarDescuentos(double subtotal, double descPrincipal, double &descFinal) {
    descFinal = descPrincipal;

    if (subtotal > 200) {
        double adicional = subtotal * 0.05; 
        descFinal += adicional;//se suma el descuento final
    }
}

void mostrarFactura(string producto, double precio, int cantidad, double subtotal, double descuento, double total) {
    cout << "----- FACTURA -----"<<endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Descuentos aplicados: " << descuento << endl;
    cout << "Total a pagar: " << total << endl;
}

int main() {
    string producto;
    double precio;
    int cantidad;

    cargarDatos(producto, precio, cantidad);

    double subtotal = calcularSubtotal(precio, cantidad);

    double descCant = descuentoCantidad(subtotal, cantidad);

    double descuentoFinal;
    aplicarDescuentos(subtotal, descCant, descuentoFinal);

    double total = subtotal - descuentoFinal;

    mostrarFactura(producto, precio, cantidad, subtotal, descuentoFinal, total);

    return 0;
}
