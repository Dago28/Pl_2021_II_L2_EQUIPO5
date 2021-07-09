#include <string>
class FacturaReparacion
{
public:
	FacturaReparacion();
	FacturaReparacion(int, std::string, std::string, double, double, double, int, int);
	void establecerNumeroFacturaR(int);
	int obtenerNumeroFacturaR() const;
	void establecerNombreEmpleadoR(std::string);
	std::string obtenerNombreEmpleadoR()const;
	void establecerNombreCajeroR(std::string);
	std::string obtenerNombreCajeroR()const;
	void establecerSubTotalReparacion(double);
	double obtenerSubTotalReparacion()const;
	void establecerISVR(double);
	double obtenerISVR()const;
	void establecerCostoReparacionVehiculo(double);
	double obtenerCostoReparacionVehiculo()const;
	void establecerFechaIngresoVehiculo(int);
	int obtenerFechaIngresoVehiculo()const;
	void establecerFechaEntregaVehiculo(int);
	int obtenerFechaEntregaVehiculo()const;

private:
	int NumeroFacturaR;
	std::string NombreEmpleadoR;
	std::string NombreCajeroR;
	double SubTotalReparacion;
	double ISVR;
	double CostoReparacionVehiculo;
	int FechaIngresoVehiculo;
	int FechaEntregaVehiculo;

};
