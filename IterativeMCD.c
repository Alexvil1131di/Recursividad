#include <iostream>
#include <conio.h>
using namespace std;


int main(){


int x, b = 1220, a = 516;

while (a > 0){

x = a;
a = b % a;
b = x;

}

cout << b;

getch();
return 0;

}