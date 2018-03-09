//ESTE PROGRAMA MUESTRA LA FUNCIONALIDAD DE LAS FUNCION DENTRO DE LOS OBJETOS
#include <iostream>
using namespace std;

// ESTA ES LA PRIMER FORMA DE DECLARAR UNA FUNCION DENTRO DE UN OBJETO

/* 

	class Box{

		public: 
			double length;
			double breadth;
			double height;
			double getVolume(void);
	
	}

*/

// ESTA ES LA SEGUNDA FORMA DE DELCARAR UN METODO 

/*

        double Box::getVolume(void){
                return length * breadth * height;
        }

*/


//ESTA ES LA TERCERA FORMA DE DECLARAR UNA FUNCION 

class Box{

        public: 
                double length;
                double breadth; 
                double height;
                // Declaracion de las funciones 
				double getVolume(void);
				double setLength(double len);
				double setBreadth(double bre);
				double setHeight(double hei);

};

double Box::getVolume(void){
	return length * breadth * height;
};

double Box::setLength(double len){
	length = len;
	return 0;
};

double Box::setBreadth(double bre){
	 breadth = bre;
	 return 0;
};

double Box::setHeight(double hei){
	height = hei;
	return 0;
};


int main(){

	Box box1, box2; // Declarando dos objetos en una linea

	double volumen = 0.0;
	
	box1.setLength(2.0);
	box1.setBreadth(2.0);
	box1.setHeight(2.0);

	volumen = box1.getVolume();
	cout << "Volumen de la caja 1 " << volumen << endl;

	
	box2.setLength(4.0);
	box2.setBreadth(4.0);
	box2.setHeight(4.0);

	volumen = box2.getVolume();
	cout << "Volumen de la caja 2 " << volumen << endl;

	return 0;

}


