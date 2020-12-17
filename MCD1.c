#include <iostream>
#include <conio.h>
using namespace std;

int MCD(int dividendo, int divisor){

if (divisor > 0){
	return MCD(divisor, dividendo % divisor);
}
else {

	return dividendo;

}
}

int main(){

int dividendo, divisor;
cout << "introduzca el dividendo y el divisor para hallar su MCD " "\n";
cin >> dividendo;
cin >> divisor;

cout << MCD(dividendo, divisor) << endl;

getch();
return 0;

}