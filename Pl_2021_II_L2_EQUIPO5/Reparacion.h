#include <string>

class Reparacion
{
public:
	Reparacion(int, std::string, int, int, std::string, std::string, double);
	void Establecerfechadeingreso(int);
	int Obtenerfechadeingreso() const;
	void Establecertipodereparacion(std::string);
	std::string Obtenertipodereparacion() const;
	void Establecerplacadevehiculo(int);
	int Obtenerplacadevehiculo() const;
	void Establecerfechadeentrega(int);
	int Obtenerfechadeentrega() const;
	void Establecertipodevehiculo(std::string);
	std::string Obtenertipodevehiculo() const;
	void Establecermarcadevehiculo(std::string);
	std::string Obtenermarcadevehiculo() const;
	void Establecercostodereparacion(double);
	double Obtenercostodereparacion() const;
	static unsigned int Obtenergarantia();
	void imprimir()const;

private:

	int fechadeingreso;
	std::string tipodereparacion;
	int placadelvehiculo;
	int fechadeentrega;
	std::string tipodevehiculo;
	std::string marcadevehiculo;
	double costodereparacion;
	static unsigned int garantia;
};


