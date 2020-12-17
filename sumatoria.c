//sumatoria tail recursion//

#include <iostream>
#include <conio.h>
using namespace std;

int suma(int numero, int acum){

if (numero == 1){
	return acum;
}
else {

	return suma(numero - 1, numero + acum);

}
}

int main(){

int numero, acum;
cout << "introduzca un numero para la suma: ";
cin >> numero;

cout << suma(numero, 1) << endl;

getch();
return 0;

}