#include <iostream>
using namespace std; 

void showValue(int a = 1);
void showTotal(int a);
void showValue2(int a, int b);
void changeValue(int a);
void changeArrayValue(int array[], int length);

void showValue(int a){
	cout<<a<<endl;
}

void showTotal(int a){
	cout<<10+a <<endl;
}

void showTotal2(int a, int b = 20){
	cout<<a + b<<endl;
}

void changeValue(int a){
	a += 100;
}

void changeArrayValue(int array[], int length){
	for(int i =0; i < length; i++){
		i += 100;
	}
} 
