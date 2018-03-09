// Una clase abstracta es una clase que describe el comportamiento de una 
// clase en c++, sin tener que implementarse
// 
// O sea, se crea una clase abstracta como template para sus clases heredadas 
// 

#include <iostream>
using namespace std;

// Clase abstracta 

class Animal{

	public:
		
		virtual void decirNombre(void) = 0;
		void setNombre(string c){
			nombre  = c;
		}

	protected: 

		string nombre;
	
};

class Perro: public Animal{

	public:
		void decirNombre(void){
			cout << "Mi nombre es: " << nombre << endl;
		}
		
};


int main(int argc, char const *argv[])
{
	Perro perro1;

	perro1.setNombre("Hawk");
	perro1.decirNombre();
	
	return 0;
}