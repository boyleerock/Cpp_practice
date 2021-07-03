#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "myheader.h"
int main(int argc, char** argv) {
	/*
	int a = 10;
	showValue(&a);
	
	int * b = new int;
	*b = 20;
	showValue(b);
	
	int * p ;
	p = &a;
	p = b;
	*/
	
	/*
	int value = 1;
	passByValue(value);
	cout<<value<<endl;
	
	passByPoint(&value);
	cout<<value<<endl;
	*/
	
	int * i = getAddressA();
	cout<<*i<<endl;
	delete i;
	
	int * j = getAddressB();
	* j = 200;
	cout<<*j<<endl;
	delete j;
	
	/*	
	int * k = getAddressC();
	cout<<*k<<endl;
	*/ 
	
	int * m = new int;
	*m = 1;
	const int * n = getAddressD(m);
	cout<<*n<<endl;
	// * n = 10
	return 0;
}
