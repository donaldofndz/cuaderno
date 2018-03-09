//En este ejercicio se pasa un parametro por medio del constructor 


#include <iostream>
using namespace std;


class Line{

	public:
		void setLength(double len);
		double getLength(void);
		Line(double len); //Este es el constructor 

	private: 
		double length;
	
};

// Los constructos si pueden tener dato de regreso
// este no es el unico metodo para mandarlos 


Line::Line(double len){
	cout << "Se creo el objeto y este es el valir de inicio: "<< len  << endl;
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}


int main(int argc, char const *argv[])
{
	Line line(8.0);

	line.setLength(10.0);

	cout << "Longitud de la linea : " << line.getLength() << endl;

	return 0;
}

