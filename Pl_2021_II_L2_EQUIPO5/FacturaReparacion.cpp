#include <iostream>
#include "FacturaReparacion.h"
using namespace std;

FacturaReparacion::FacturaReparacion() {

}
FacturaReparacion::FacturaReparacion(int nfacturar, string nempleador, string ncajeror, double streparacion, double isvr, double crvehiculo, int fivehiculo, int fevehiculo) {
	NumeroFacturaR = nfacturar;
	NombreEmpleadoR = nempleador;
	NombreCajeroR = ncajeror;
	SubTotalReparacion = streparacion;
	ISVR = isvr;
	CostoReparacionVehiculo = crvehiculo;
	FechaIngresoVehiculo = fivehiculo;
	FechaEntregaVehiculo = fevehiculo;
}

void FacturaReparacion::establecerNumeroFacturaR(int nfacturar) {
	NumeroFacturaR = nfacturar;
}
int FacturaReparacion::obtenerNumeroFacturaR()const {
	return NumeroFacturaR;
}
void FacturaReparacion::establecerNombreEmpleadoR(string nempleador) {
	NombreEmpleadoR = nempleador;
}
string FacturaReparacion::obtenerNombreEmpleadoR()const {
	return NombreEmpleadoR;
}
void FacturaReparacion::establecerNombreCajeroR(string ncajeror) {
	NombreCajeroR = ncajeror;
}
string FacturaReparacion::obtenerNombreCajeroR()const {
	return NombreCajeroR;
}
void FacturaReparacion::establecerSubTotalReparacion(double streparacion) {
	SubTotalReparacion = streparacion;
}
double FacturaReparacion::obtenerSubTotalReparacion()const {
	return SubTotalReparacion;
}
void FacturaReparacion::establecerISVR(double isvr) {
	ISVR = isvr;
}
double FacturaReparacion::obtenerISVR()const {
	return ISVR;
}
void FacturaReparacion::establecerCostoReparacionVehiculo(double crvehiculo) {
	CostoReparacionVehiculo = crvehiculo;
}
double FacturaReparacion::obtenerCostoReparacionVehiculo()const {
	return CostoReparacionVehiculo;
}
void FacturaReparacion::establecerFechaIngresoVehiculo(int fivehiculo) {
	FechaIngresoVehiculo = fivehiculo;
}
int FacturaReparacion::obtenerFechaIngresoVehiculo()const {
	return FechaIngresoVehiculo;
}
void FacturaReparacion::establecerFechaEntregaVehiculo(int fevehiculo) {
	FechaEntregaVehiculo = fevehiculo;
}
int FacturaReparacion::obtenerFechaEntregaVehiculo()const {
	return FechaEntregaVehiculo;
}



