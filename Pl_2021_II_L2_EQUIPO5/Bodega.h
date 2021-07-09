#include <string>
#include "Inventario.h"


class Bodega:public Inventario
{
public:
	Bodega(std::string, std::string, int, double, std::string);
	~Bodega() {};
	
	void establecerFechaCreacionBodega(const std::string&);

	std::string obtenerFechaCreacionBodega() const;

	void imprimirBodega() const;
private:
	
	std::string FechaCreacionBodega;

};


