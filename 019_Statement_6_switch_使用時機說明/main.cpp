#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J�N�� (A,B,C,D) => ";
	char a;
	cin>>a;
	
	string b = "��J���~";
	switch(a){
		case 'A':
			b = "�K��";
			break;
		case 'B':
			b = "�L��";
			break;
		case 'C':
			b = "���";
			break;
		case 'D':
			b = "�V��";
			break;	
		
	} 
	
	cout<<"�{�b�O:"<<b<<endl; 
	return 0;
}
