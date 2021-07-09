#include <iostream>
#include "Mecanico.h"
using namespace std;
string Mecanico::NombreMecanico = "Armando";
string Mecanico::ApellidoMecanico = "Motores";
string Mecanico::PuestoTrabajo = "Mecanico";
unsigned int Mecanico::NumeroEmpleado = 000456;

string  Mecanico::obtenerNombreMecanico() {
	return NombreMecanico;
}
string  Mecanico::obtenerApellidoMecanico() {
	return ApellidoMecanico;
}
string  Mecanico::obtenerPuestoTrabajo() {
	return PuestoTrabajo;
}
unsigned int Mecanico::obtenerNumeroEmpleado() {
	return NumeroEmpleado;
}

void Mecanico::Imprimir()const {
	cout << "El numero del empleado: " << obtenerNumeroEmpleado
		<< "\n Nombre del empleado: " << obtenerNombreMecanico << " " << obtenerNombreMecanico
		<< "\n Atendio al cliente como: " << obtenerPuestoTrabajo << endl;

}