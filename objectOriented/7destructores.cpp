//Durante este archivo haremos uso de los destructores 
//	Un Constructor es un metodo que se efectua cada que un objeto de la clase
//	 1. Sale del scope 
//	 2. Cuando al expression delete se efectua sobre el apuntador al objeto
//	 


#include <iostream>
using namespace std;

class Line{

	public:
		void setLength(double len);
		double getLength(void);
		Line(); //Este es el constructor 
		~Line(); //Este es el destructor 

	private: 
		double length;
};

//CREACION DE CONSTRUCTOR 

Line::Line(void){
	cout << "El objeto ha sido creado";
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}

// CREACION DE DESTRUCTOR 

Line::~Line(void){
	cout << "El objeto ha sido borrado";
}

int main(int argc, char const *argv[])
{
	Line line;

	line.setLength(10.0);
	cout << "El largo de la linea es :  " << line.getLength() << endl;
	return 0;
}
