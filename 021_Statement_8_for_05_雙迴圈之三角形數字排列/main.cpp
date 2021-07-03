#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//1
//12
//123
//1234
//12345
int main(int argc, char** argv) {
	/*
	for(int b = 1; b <= 5; b++){
		for(int a = 1; a <= b; a++){
			cout<<a;
		}
		cout<<endl;
	}
	*/
//12345
//1234
//123
//12
//1
	/*
	for(int b = 1; b <= 5; b++){
		for(int a = 1; a <= 6 - b; a++){
			cout<<a;
		}
		cout<<endl;
	}
	*/
	
//54321
//5432	
//543
//54
//5
	/*
	for(int b = 5;b >= 1; b--){
		for(int a = 5; a >= 6 - b ; a--){
			cout<<a;
		}
		cout<<endl;
	}
	*/
	
//	  1
//   123
//  12345
// 1234567
//123456789
	/*
	for(int c = 1; c <= 9; c+=2){
		for(int a = 1; a <= (9 - c) / 2; a++){
			cout<<" ";
		}
		for(int b = 1; b <= c; b++){
			cout<<b;
		}
		cout<<endl;
	}	
	*/
	
	/*
	for(int c = 4; c >= 0; c--){
		for(int a = 1; a <= c; a++){
			cout<<" ";
		}
		for(int b = 1; b <= 9 - 2 * c; b++){
			cout<<b;
		}
		cout<<endl; 
	}
	*/
	
	//¤­­Ó¨Fº|¸òª÷¦r¶ð 
	for(int d = 1; d <= 5; d++){
		for(int c = 0; c <= 3; c++){
			for(int a = 1; a <= c; a++){
				cout<<" ";
			}
			for(int b = 1; b <= 9 - 2 * c; b++){
				cout<<b;
			}
			cout<<endl; 
		}
		
		for(int c = 4; c >= 0; c--){
			for(int a = 1; a <= c; a++){
				cout<<" ";
			}
			for(int b = 1; b <= 9 - 2 * c; b++){
				cout<<b;
			}
			cout<<endl; 
		}
	}
		
	
	
	return 0;
	
}
