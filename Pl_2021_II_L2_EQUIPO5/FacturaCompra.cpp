#include <iostream>
#include "FacturaCompra.h"
using namespace std;

FacturaCompra::FacturaCompra() {

}
FacturaCompra::FacturaCompra(int nfactura, string nempleado, string ncajero, string locomprados, double stobjetos, double isv, double tventas) {
	NumeroFactura = nfactura;
	NombreEmpleado = nempleado;
	NombreCajero = ncajero;
	ListaObjetosComprados = locomprados;
	SubTotalObjetos = stobjetos;
	ISV = isv;
	TotalVentas = tventas;

}

void FacturaCompra::establecerNumeroFactura(int nfactura) {
	NumeroFactura = nfactura;
}
int FacturaCompra::obtenerNumeroFactura()const {
	return NumeroFactura;
}
void FacturaCompra::establecerNombreEmpleado(string nempleado) {
	NombreEmpleado = nempleado;
}
string FacturaCompra::obtenerNombreEmpleado()const {
	return NombreEmpleado;
}
void FacturaCompra::establecerNombreCajero(string ncajero) {
	NombreCajero = ncajero;
}
string FacturaCompra::obtenerNombreCajero()const {
	return NombreCajero;
}
void FacturaCompra::establacerListaObjetosComprados(string locomprados) {
	ListaObjetosComprados = locomprados;
}
string FacturaCompra::obtenerListaObjetosComprados()const {
	return ListaObjetosComprados;
}
void FacturaCompra::establecerSubTotalObjetos(double stobjetos) {
	SubTotalObjetos = stobjetos;
}
double FacturaCompra::obtenerSubTotalObjetos()const {
	return SubTotalObjetos;
}
void FacturaCompra::establecerISV(double isv) {
	ISV = isv;
}
double FacturaCompra::obtenerISV()const {
	return ISV;
}
void FacturaCompra::establecerTotalVentas(double tventas) {
	TotalVentas = tventas;
}
double FacturaCompra::obtenerTotalVentas()const {
	return TotalVentas;
}

