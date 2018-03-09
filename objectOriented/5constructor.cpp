//Archivo para entender constructores 
//
// Un CONSTRUCTOR es un metodo especial de una clase, se ejecuta 
//	cada vez que una clase es intanciada 
//


#include <iostream>
using namespace std;


class Line{

	public:
		void setLength(double len);
		double getLength(void);
		Line(); //Este es el constructor 

	private: 
		double length;
	
};

// Los constructos si pueden tener dato de regreso
// Pero deben de tener datos de default 


Line::Line(void){
	cout << "Se creo el objeto" << endl;
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}


int main(int argc, char const *argv[])
{
	Line line;

	line.setLength(10.0);

	cout << "Longitud de la linea : " << line.getLength() << endl;

	return 0;
}


