#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J�N��(0~3) => ";
	int a;
	cin>>a;
	
	const int c = 0;
	
//	string b = "��J���~";
	string b;
	a = a % 4;
	switch(a) {
		case c:
			b = "�K��";
			break;
		case c + 1:
			b = "�L��";
			break;
		case c + 2:
			b = "���";
			break;
		case c + 3:
			b = "�V��";
			break;
		default:
			b = "��J���~";
	}
	cout<<"�{�b�O: "<<b<<endl; 
	
	return 0;
}
