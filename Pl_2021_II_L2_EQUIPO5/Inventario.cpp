#include <iostream>
#include "Inventario.h"
#include <iomanip>
#include <string>

using namespace std; 

Inventario::Inventario(std::string _CodigoProducto, std::string _NombreProducto, int _CantidadProducto,
	double _PrecioProducto/*, std::string _FechaCreacionInventario*/) {

	CodigoProducto = _CodigoProducto;
	NombreProducto = _NombreProducto;
	CantidadProducto = _CantidadProducto;
	PrecioProducto = _PrecioProducto;
	//FechaCreacionInventario = _FechaCreacionInventario;
}

void Inventario::establecerCodigoProducto(const std::string& _CodigoProducto) {
	CodigoProducto = _CodigoProducto;
}
std::string Inventario::obtenerCodigoProducto() const {
	return CodigoProducto;
}

void Inventario::establecerNombreProducto(const string& _NombreProducto) {
	NombreProducto = _NombreProducto;
}
std::string Inventario::obtenerNombreProducto() const {
	return NombreProducto;
}

void Inventario::establecerCantidadProducto(const int& _CantidadProducto) {
	CantidadProducto = _CantidadProducto;
}
int Inventario::obtenerCantidadProducto() const {
	return CantidadProducto;
}

void Inventario::establecerPrecioProducto(const double& _PrecioProducto) {
	PrecioProducto = _PrecioProducto;
}
double Inventario::obtenerPrecioProducto() const {
	return PrecioProducto;
}

void Inventario::ImprimirInventario() const {
	cout << "*************************************************************************************************" << endl;
	cout << "El  Inventario es: " << endl;
	cout << "*************************************************************************************************" << endl;
	cout <<	"Codigo: " << obtenerCodigoProducto << " / " << 
		"Producto: " << obtenerNombreProducto << " / " <<
		"Cantidad: " << obtenerCantidadProducto << " / " <<
		"Precio:" << obtenerPrecioProducto;
}
