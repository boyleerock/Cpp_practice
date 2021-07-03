#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	for(int a = 1; a <= 9; a++){
		for(int b = 1; b <= 9; b++){
			int product = 0;
			product = a * b;
			cout<<a<<"*"<<b<<"="<<product<<"\t";	//\t =>> tab
		}
		cout<<endl;
	}
	*/
	for(int a = 1; a <= 9; a++){
		for(int b = 1; b <= 9; b++){
			int product = 0;
			product = a * b;
			cout<<a<<"*"<<b<<(product >= 10 ? "=": "= ")<<product<<"\t";	//\t =>> tab
		}
		cout<<endl;
	}
	
	return 0;
}
