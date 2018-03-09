//Este programa busca ejemplificar los modificadores de acceso 

#include <iostream>
using namespace std;

//Un elemento public se puede acceder desde cualquier punto fuera de la clase

//Un elemento private no puede accederse o verse desde fuera de una clase, 
//por default todoo en una clase es private

//Usualmente los atributos se declara como private y las funciones que referencian public

class Box{

	public:

		double length;
		void setWidth(double wid);
		double getWidth(void);
	

	private: 

		double width;

};

void Box::setWidth(double wid){

	width = wid;

}

double Box::getWidth(void){
	return width;
}


int main(int argc, char const *argv[])
{
	Box box1;

	box1.length = 10.0;

	cout << "El largo de la caja es : " << box1.length << endl;

	//Si quisiera acceder al width marcaria error porque es private 

	box1.setWidth(10.0);
	cout << "Este es el ancho de la caja : " << box1.getWidth() << endl;


	return 0;
}