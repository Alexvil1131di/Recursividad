//factorial no tail recursion//
#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int numero){

if (numero == 1){
	return numero;
}
else {

	return numero * factorial(numero - 1);

}
}

int main(){

int numero;
cout << "introduzca un numero para la factorial: ";
cin >> numero;

cout << factorial(numero) << endl;

getch();
return 0;

}