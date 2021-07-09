#include <string>
class FacturaCompra
{
public:
	FacturaCompra();
	FacturaCompra(int, std::string, std::string, std::string, double, double, double);
	void establecerNumeroFactura(int);
	int obtenerNumeroFactura() const;
	void establecerNombreEmpleado(std::string);// puede ser usado de otra clase 
	std::string obtenerNombreEmpleado()const;
	void establecerNombreCajero(std::string);
	std::string obtenerNombreCajero()const;
	void establacerListaObjetosComprados(std::string);
	std::string obtenerListaObjetosComprados()const;
	void establecerSubTotalObjetos(double);
	double obtenerSubTotalObjetos()const;
	void establecerISV(double);
	double obtenerISV()const;
	void establecerTotalVentas(double);
	double obtenerTotalVentas()const;

private:
	int NumeroFactura;
	std::string NombreEmpleado;
	std::string NombreCajero;
	std::string ListaObjetosComprados;
	double SubTotalObjetos;
	double ISV;
	double TotalVentas;

};


