#include <iostream> 
using namespace std;


//variable declaras de forma global
int i = 2,j,k;

int main(){

	// variables definidas de forma local
	int i,j;

	//siempre va a imprimir la variable local sobre la global 
	cout << i << endl;
	cout << k << endl;
}
