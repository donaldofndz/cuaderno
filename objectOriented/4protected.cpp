#include <iostream>
using namespace std;

// Mostraremos el funcionamiento de las clases protected
//
// Son similares a las clases protegidas pero con el beneficio que sus 
// variable puden ser vistars por las clases hijas

class Box{

	protected:

		double width;
	
};

class SmallBox:Box{

	public:
		void setSmallWidth(double wid);
		double getSmallWidth(void);
	
};


void SmallBox::setSmallWidth(double wid){
	width = wid;
}

double SmallBox::getSmallWidth(void){
	return width;
}

int main(int argc, char const *argv[])
{

	SmallBox box1;

	box1.setSmallWidth(4.0);

	cout << "El valor de small es: " << box1.getSmallWidth() << endl;

	return 0;
	
}