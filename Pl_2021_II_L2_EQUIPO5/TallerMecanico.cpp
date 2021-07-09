#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <typeinfo>

#include "Bodega.h"
#include "Mecanico.h"
#include "Inventario.h"
#include "FacturaCompra.h"
#include "FacturaReparacion.h"



using namespace std;
int menu() {
	while (true) {
		cout << "[==============================]" << endl
			<< "        Taller       " << endl
			<< "[==============================]" << endl
			<< "1. FacturaCompra " << endl
			<< "2. FacturaReparacion  " << endl
			<< "3. Salir: " << endl
			<< "Ingrese una opcion: ";
		int valor;
		cin >> valor;
		if (valor > 0 && valor < 4)
			return valor;
	}
}


int main() {
		
	vector < Inventario* > producto(5);
	producto[0] = new Inventario("12341234", "Aceite", 100, 150.00);
	producto[1] = new Inventario("45124123", "Llantas", 100, 1700.00);
	producto[2] = new Inventario("23452345", "Liquido de Freno", 100, 200.00);
	producto[3] = new Inventario("23415231", "Liquido Refrigerante", 100, 360.00);
	producto[4] = new Inventario("63425634", "Tacometro", 100, 5600.00);
	for each (Inventario* productoPuntero in producto)
	{
		productoPuntero->ImprimirInventario();
		cout << endl;
	}

	vector < Bodega* > productos(5);
	productos[0] = new Bodega("12341234", "Aceite", 1000, 150.00, "3/07/2021");
	productos[1] = new Bodega("451	24123", "Llantas", 1000, 1700.00, "3/07/2021");
	productos[2] = new Bodega("23452345", "Liquido de Freno", 1000, 200.00, "3/07/2021");
	productos[3] = new Bodega("23415231", "Liquido Refrigerante", 1000, 360.00, "3/07/2021");
	productos[4] = new Bodega("63425634", "Tacometro", 1000, 5600.00, "3/07/2021");
	for each (Bodega * productosPuntero in productos)
	{
		productosPuntero->imprimirBodega();
		cout << endl;
	}
	FacturaCompra* compra = new FacturaCompra();
	FacturaReparacion* reparacion = new FacturaReparacion();

	int opcion = 0;
	while (opcion != 3) {
		switch (opcion = menu()) {
		case 1: {
			int numeroFactura;
			string nombreEmpleado;
			string nombreCajero;
			double isv;
			double totalVentas;
			cout << "Ingrese numero de factura: " << endl;
			cin >> numeroFactura;
			cout << " Ingrese nombre del Empleado: " << endl;
			getline(cin, nombreEmpleado);
			getline(cin, nombreEmpleado);
			cout << "Ingrese nombre Cajero: " << endl;
			getline(cin, nombreCajero);


		}
		case 2: {
			int numeroFactura;
			string nombreEmpleado;
			string nombreCajero;
			double isv;
			double totalVentas;
			cout << "Ingrese numero de factura: " << endl;
			cin >> numeroFactura;
			cout << " Ingrese nombre del Empleado: " << endl;
			getline(cin, nombreEmpleado);
			getline(cin, nombreEmpleado);
			cout << "Ingrese nombre Cajero: " << endl;
			getline(cin, nombreCajero);


		}
		}
	}




	delete compra;
	delete reparacion;


	system("pause");
	return 0;
}
