#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J���N��� => ";
	int a;
	cin>>a;
	
	cout<<"�п�J���N��� => ";
	int b;
	cin>>b;
	
	if(a >b) {
		cout<<"����j���ȬO: "<<a<<endl; 
	}else if(a < b) {
		cout<<"����j���ȬO: "<<b<<endl;
	}else {
		cout<<"��ӭȤ@�ˤj"<<a<<endl;
	}
	return 0;
}