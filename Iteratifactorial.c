#include <iostream>
#include <conio.h>
using namespace std;


int main(){

int x = 1;

for (int i = 5; i > 0; i-- ){

	x = x * i;
}

cout << x;

getch();
return 0;

}