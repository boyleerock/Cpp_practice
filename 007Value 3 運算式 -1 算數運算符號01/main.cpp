#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"enter an integer => "; 
	int a;
	cin>>a;
	
	cout<<"enter another integer => "; 
	int b;
	cin>>b;
	
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	
	cout<<a<<" + "<<b<<" = "<<c<<endl;
	cout<<a<<" - "<<b<<" = "<<d<<endl;
	cout<<a<<" * "<<b<<" = "<<e<<endl;
	cout<<a<<" / "<<b<<" = "<<f<<endl;
	
	int g = a % b;
	
	if(g == 0){
		cout<<a<<" 是 "<<b<<" 的倍數"<<endl; 
	}else {
		cout<<a<<" 不是 "<<b<<" 的倍數"<<endl; 
	}
	return 0;
}
