//factorial tail recursion//

#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int numero, int acum){

if (numero == 1){
	return acum;
}
else {

	return factorial(numero - 1, numero * acum);

}
}

int main(){

int numero, acum;
cout << "introduzca un numero para la factorial: ";
cin >> numero;

cout << factorial(numero, 1) << endl;

getch();
return 0;

}