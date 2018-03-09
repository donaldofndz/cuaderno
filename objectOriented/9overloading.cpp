// Function overloading 
// 
// Es la capacidad de una clase que nos permite especificar más de un metodo 
// con el mismo nombre, en el mismo scope 
// 
// Son dos metodos declarados con el mismo nombre pero con distintos atributos
// y el compilador decidira cual de los dos metoodos utilizar

#include <iostream>
using namespace std;

class printData{

	public:

		void print(int entero){
			cout << "Imprime un int: " << entero << endl;
		}

		void print(double flotante){
			cout << "Imprime un flotante: " << flotante << endl;
		}
	
		//Tambien se puede pasar asi === char *c
		void print(string c){
			cout << "Se imprimen caracteres: " <<  c << endl;
		}
};

int main(int argc, char const *argv[])
{
	
	printData pd;

	pd.print(5);
	pd.print(6.0);
	pd.print("Siete");

	return 0;

	return 0;
}