#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string pnombre, string snombre, string papellido, string sapellido,
	int ntelefono, int nidentidad, int ncliente) {

	PrimerNombre = pnombre;
	SegundoNombre = snombre;
	ApellidoPaterno = papellido;
	ApellidoMaterno = sapellido;
	NumeroTelefono = ntelefono;
	NumeroIdentidad = nidentidad;
	NumeroCliente = ncliente;
}

void Cliente::EstablecerPrimerNombre(string pnombre) {
	PrimerNombre = pnombre;
}
string Cliente::ObtenerPrimerNombre()const {
	return PrimerNombre;
}

void Cliente::EstablecerSegundoNombre(string snombre) {
	SegundoNombre = snombre;
}
string Cliente::ObtenerSegundoNombre()const {
	return SegundoNombre;
}

void Cliente::EstablecerApellidoPaterno(string papellido) {
	ApellidoPaterno = papellido;
}
string Cliente::ObtenerApellidoPaterno()const {
	return ApellidoPaterno;
}

void Cliente::EstablecerApellidoMaterno(string sapellido) {
	ApellidoMaterno = sapellido;
}
string Cliente::ObtenerApellidoMaterno()const {
	return ApellidoMaterno;
}

void Cliente::EstablecerNumeroTelefono(int ntelefono) {
	NumeroTelefono = ntelefono;
}
int Cliente::ObtenerNumeroTelefono()const {
	return NumeroTelefono;
}

void Cliente::EstablecerNumeroIdentidad(int nidentidad) {
	NumeroIdentidad = nidentidad;
}
int Cliente::ObtenerNumeroIdentidad()const {
	return NumeroIdentidad;
}

void Cliente::EstablecerNumeroCliente(int ncliente) {
	NumeroCliente = ncliente;
}
int Cliente::ObtenerNumeroCliente()const {
	return NumeroCliente;
}

void Cliente::MostrarMensaje()const {
	cout << "Esta viendo los detalles para el cliente: " << ObtenerNumeroCliente << "\n";
}

void Cliente::Imprimir()const {
	cout << "Nombre del cliente: " << ObtenerPrimerNombre << " " << ObtenerSegundoNombre << " " << ObtenerApellidoPaterno << " " << ObtenerApellidoMaterno
		<< "\n Numero de telefono: " << ObtenerNumeroTelefono
		<< "\n Numero de identidad: " << ObtenerNumeroIdentidad << endl;
}