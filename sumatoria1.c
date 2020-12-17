//sumatoria no tail recursion//
#include <iostream>
#include <conio.h>
using namespace std;

int suma(int numero){

if (numero == 1){
	return numero;
}
else {

	return numero + suma(numero - 1);

}
}

int main(){

int numero;
cout << "introduzca un numero para la suma: ";
cin >> numero;

cout << suma(numero) << endl;

getch();
return 0;

}