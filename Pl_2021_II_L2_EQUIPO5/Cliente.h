#include <string>

class Cliente
{
public:
	Cliente(std::string, std::string, std::string, std::string, int, int, int);
	void EstablecerPrimerNombre(std::string);
	std::string ObtenerPrimerNombre() const;
	void EstablecerSegundoNombre(std::string);
	std::string ObtenerSegundoNombre() const;
	void EstablecerApellidoPaterno(std::string);
	std::string ObtenerApellidoPaterno() const;
	void EstablecerApellidoMaterno(std::string);
	std::string ObtenerApellidoMaterno() const;
	void EstablecerNumeroTelefono(int);
	int ObtenerNumeroTelefono() const;
	void EstablecerNumeroIdentidad(int);
	int ObtenerNumeroIdentidad() const;
	void EstablecerNumeroCliente(int);
	int ObtenerNumeroCliente() const;

	void MostrarMensaje()const;
	void Imprimir() const;

	/*
	* static unsigned int obtenerNumeroCliente();
	*/

	//Metodos por propiedades 

private:
	std::string PrimerNombre;
	std::string SegundoNombre;
	std::string ApellidoPaterno;
	std::string ApellidoMaterno;
	int NumeroTelefono;
	int NumeroIdentidad;
	int NumeroCliente;
	/*
	* static unsigned int NumeroCliente;
	* en caso de que lo usemos como num static
	*/
};




