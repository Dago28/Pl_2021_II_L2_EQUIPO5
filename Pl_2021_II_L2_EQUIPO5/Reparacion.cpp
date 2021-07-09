#include <iostream>
#include "Reparacion.h"
using namespace std;
unsigned Reparacion::garantia = 15;
unsigned Reparacion::Obtenergarantia() {
	return garantia;
}

Reparacion::Reparacion(int _fechaingreso, string _tipodereparacion, int _placadevehiculo, int _fechadeentrega, string _tipodevehiculo, string _marcadevehiculo, double _costodereparacion) {
	fechadeingreso = _fechaingreso;
	tipodereparacion = _tipodereparacion;
	placadelvehiculo = _placadevehiculo;
	fechadeentrega = _fechadeentrega;
	tipodevehiculo = _tipodevehiculo;
	marcadevehiculo = _marcadevehiculo;
	costodereparacion = _costodereparacion;

}

void Reparacion::Establecerfechadeingreso(int _fechaingreso) {
	fechadeingreso = _fechaingreso;
}
int Reparacion::Obtenerfechadeingreso()const {
	return fechadeingreso;
}
void Reparacion::Establecertipodereparacion(string _tipodereparacion) {
	tipodereparacion = _tipodereparacion;
}
string Reparacion::Obtenertipodereparacion()const {
	return tipodereparacion;
}
void Reparacion::Establecerplacadevehiculo(int _placadevehiculo) {
	placadelvehiculo = _placadevehiculo;
}
int Reparacion::Obtenerplacadevehiculo()const {
	return placadelvehiculo;
}
void Reparacion::Establecerfechadeentrega(int _fechadeentrega) {
	fechadeentrega = _fechadeentrega;
}
int Reparacion::Obtenerfechadeentrega()const {
	return fechadeentrega;
}
void Reparacion::Establecertipodevehiculo(string _tipodevehiculo) {
	tipodevehiculo = _tipodevehiculo;
}
string Reparacion::Obtenertipodevehiculo()const {
	return tipodevehiculo;
}
void Reparacion::Establecermarcadevehiculo(string _marcadevehiculo) {
	marcadevehiculo = _marcadevehiculo;
}
string Reparacion::Obtenermarcadevehiculo()const {
	return marcadevehiculo;
}
void Reparacion::Establecercostodereparacion(double _costodereparacion) {
	costodereparacion = _costodereparacion;
}
double Reparacion::Obtenercostodereparacion()const {
	return costodereparacion;
}
void Reparacion::imprimir()const {
	cout << "La fecha de ingreso es: " << fechadeingreso
		<< "El tipo de reparacion es: " << tipodereparacion
		<< "la placa del vehiculo es: " << placadelvehiculo
		<< "La fecha de entrega  es: " << fechadeentrega
		<< "El tipo de vehiculo es: " << tipodevehiculo
		<< "La marca del vehiculo es: " << marcadevehiculo
		<< "El costo total de la reparacion es: " << costodereparacion;
}
