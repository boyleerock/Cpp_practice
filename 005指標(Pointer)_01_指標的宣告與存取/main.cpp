#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	a = 9;
	cout<<a<<endl;
	
	int * p;
	p = &a;
	cout<<p<<endl;
	
	* p = 10;
	cout<<* p<<endl;
	cout<<a<<endl;
	
	int * q = &a;
	* q = 20;
	cout<<a<<endl;
	cout<<* p<<endl;
	
	int * r;
	r = new int;
	* r = 100;
	cout<<r<<endl;
	cout<<*r<<endl;
	
	int * s = r;
	*s = 200;
	cout<<*r<<endl;
	
	delete r;
	cout<<r<<endl;
	cout<<*r<<endl;
	
	cout<<s<<endl;
	cout<<*s<<endl;
	
	r = new int;
	*r = 300;
	cout<<r<<endl;
	cout<<*r<<endl;
	
	return 0;
}
