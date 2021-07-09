#include <string>
class Inventario {
public:
	Inventario(std::string, std::string, int, double/*, std::string*/);
	~Inventario() {};

	void ImprimirInventario() const;

	void establecerCodigoProducto(const std::string&);
	void establecerNombreProducto(const std::string&);
	void establecerCantidadProducto(const int&);
	void establecerPrecioProducto(const double&);

	//void establecerFechaCreacionInventario(std::string);

	std::string obtenerCodigoProducto() const;
	std::string obtenerNombreProducto() const;
	int obtenerCantidadProducto() const;
	double obtenerPrecioProducto() const;

	//std::string obtenerFechaCreacionInventario() const;

private:
	
	std::string CodigoProducto;
	std::string NombreProducto;
	unsigned int CantidadProducto;
	double PrecioProducto;
	std::string FechaCreacionInventario;

};
