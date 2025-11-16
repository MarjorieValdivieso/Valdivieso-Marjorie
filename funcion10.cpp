#include <iostream>
#include <iomanip>
using namespace std;
//Marjorie Valdivieso
// Crea un programa en C++ que simule una tarjeta de transporte del Metro/Bus deQuito

//recarga el saldo
void recargar(double &saldo, double monto) {
    saldo += monto;   
    cout << "Recarga exitosa. Saldo actual: $" 
         << fixed << setprecision(2) << saldo << endl;
}

// Pagar pasaje
// Devuelve true si se pudo pagar, false si no hay saldo
bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {         
        saldo -= tarifa;           // descuenta el pasaje
        cout << "Pago exitoso. Saldo actual: $"
             << fixed << setprecision(2) << saldo << endl;
        return true;
    } else {
        cout << "Saldo insuficiente. No se pudo realizar el pago." << endl;
        return false;
    }
}

void mostrarEstado(double saldo, int pasadas) {
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << fixed << setprecision(2) << saldo << endl;
}

int main() {
    double saldo = 0.0;      
    double monto;
    double tarifa = 0.45;    
    int pasadas = 0;         

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $" << fixed << setprecision(2) << saldo << endl;

    
    cout << "Ingrese monto a recargar: ";
    cin >> monto;
    recargar(saldo, monto);

    cout << "Pagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa))
        pasadas++;

    cout << "Pagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa))
        pasadas++;

    mostrarEstado(saldo, pasadas);

    cout << "===================================" << endl;

    return 0;
}
