#include <string>

class Mecanico
{
public:
	Mecanico(std::string, std::string, std::string, int);
	static std::string obtenerNombreMecanico();
	static std::string obtenerApellidoMecanico();
	static std::string obtenerPuestoTrabajo();
	static unsigned int obtenerCodigoEmpleado();
	//Metodos propiedades (al ser static no ocupa 1 establecer)

private:
	static std::string NombreMecanico;
	static std::string ApellidoMecanico;
	static std::string PuestoTrabajo;
	static unsigned int CodigoEmpleado;
};