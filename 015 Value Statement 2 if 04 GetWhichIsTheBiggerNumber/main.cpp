#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//代號的運用
 
int main(int argc, char** argv) {
	
	cout<<"請輸入任意整數 => ";
	int a;
	cin>>a;
	
	cout<<"請輸入任意整數 => ";
	int b;
	cin>>b;
	
	cout<<"請輸入任意整數 => ";
	int c;
	cin>>c;
	
	cout<<"請輸入任意整數 => ";
	int d;
	cin>>d;
	
	int value = a;
	int e = 1;
	
	if(value < b){
		value = b;
		e = 2;
	} 
	if(value < c){
		value = c;
		e = 3;
	} 
	if(value < d){
		value = d;
		e = 4;
	} 
	
	if(a == b && b == c && c == d){
		e = 0;
	}
	if(e == 0){
		cout<<"全部一樣大"<<endl; 
	}
	if(e != 0 ){
		cout<<"第 "<< e <<"個比較大"<<endl;
	}
	
	return 0;
}
