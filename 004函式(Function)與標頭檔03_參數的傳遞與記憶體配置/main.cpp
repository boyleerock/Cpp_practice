#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "MyHeader.h"
int main(int argc, char** argv) {
//	showValue(5);
//	showTotal(6);
//	showTotal2(1);
	 
	int a = 1;
	changeValue(a);
	cout<<a<<endl;
	 
	int array[] = {1,2,3,4,5};
	changeArrayValue(array, 5);
	for(int i = 0; i < 5; i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
