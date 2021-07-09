#include <iostream>
#include "Bodega.h"
using namespace std;

Bodega::Bodega(std::string _CodigoProducto, std::string _NombreProducto, int _CantidadProducto,
	double _PrecioProducto, std::string _FechaCreacionBodega)
	:Inventario(_CodigoProducto, _NombreProducto, _CantidadProducto, _PrecioProducto) {}

void Bodega::establecerFechaCreacionBodega(const std::string& _FechaCreacionBodega) {
	FechaCreacionBodega = _FechaCreacionBodega;
}

std::string Bodega::obtenerFechaCreacionBodega() const{
	return FechaCreacionBodega;
}

void Bodega::imprimirBodega() const {
	cout << "La fecha de creacion del inventario bodega es: " << obtenerFechaCreacionBodega;
	Inventario::ImprimirInventario();
}