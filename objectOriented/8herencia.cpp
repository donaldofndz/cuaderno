//En este archivo vamos a ver el uso de la herencia y de la multiherencia 
//

#include <iostream> 
#include <cstring>

using namespace std;

class Shape{

	public:
		void setWidth(double wid);
		void setHeight(double hei);

	protected:  //Es importante que sea protected

		double width;
		double height;
	
};

class Costo{

	public:
		
		void setCosto(double cos);

	protected: 
		double costo;

	
};


void Costo::setCosto(double cos){
	costo = cos;
}

void Shape::setWidth(double wid){
	width = wid;
}

void Shape::setHeight(double hei){
	height = hei;
}





class Rectangle : public Shape{

	public:

		double getArea(){
			return (width * height);
		}

};

class Triangle : public Shape, public Costo{

	public:
		
		double costoMetro(){
			return (costo * width * height);
		}
	
};




int main(int argc, char const *argv[])
{
	Rectangle rect;
	Triangle tri;

	rect.setWidth(5.0);
	rect.setHeight(5.0);
	tri.setWidth(5.0);
	tri.setHeight(5.0);
	tri.setCosto(5.0);

	cout << "El valor del area es el siguiente: " << rect.getArea() << endl;

	cout << "El valor por metro es el siguiente: " << tri.costoMetro() << endl;

	return 0;
}