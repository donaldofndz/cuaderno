#include <iostream>
using namespace std;


// CREAMOS UNA CLASE LLAMADA BOX, TIENE ATRIBUTOS TIPO PUBLIC


class Box{
	public:
		double length; // ATRIBUTO TIPO PUBLIC
		double breadth; // ATRIBUTO TIPO PUBLIC
		double height; // ATRIBUTO TIPO PUBLIC
};


int main(){
	
	Box box1; //declaro una objeto
	Box box2; //declaro otro objeto 
	double volume = 0.0;

	box1.height = 5.0;
	box1.length = 2.3;
	box1.breadth = 7.0;

	box2.height = 10.0;
	box2.length = 10.0;
	box2.breadth = 10.0;


	volume = box1.height * box1.length * box2.breadth;
	cout << "El valor del volumen : " << volume <<endl;

	volume = box2.height * box2.length * box2.breadth;
	cout << "El valor del volumen 2 : " << volume <<endl;

	return 0;

}
