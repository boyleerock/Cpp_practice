#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(int a = 1; a <= 3; a++){
		cout<<"Hi"<<endl;
	}
	cout<<"------------------------"<<endl;
	for(int a= 1; a <=6; a+=2){
		cout<<"Hi"<<endl;
	}
	cout<<"------------------------"<<endl;
	int b = 1;
	for(; b <= 3; b++){
		cout<<"La"<<endl;
	}
	for(; b <= 3; b++){
		cout<<"La"<<endl;
	}
	cout<<"------------------------"<<endl;
	for(int c = 1; ; c++){
		cout<<"Li"<<endl;
		if(c >3){
			break;
		}
	}
	cout<<"------------------------"<<endl;
	for(int d = 1;d<=3 ; ){
		cout<<"Lo"<<endl;
		d++;
	}
	cout<<"------------------------"<<endl;
	//第二個區段不能有逗點，只能有一個布林值 
	for(int x = 1, y = 10; x<= 3 && y >= 1 ; x++, y--){
		cout<<"Li"<<endl;
		
	}
	
	cout<<"------------------------"<<endl;
	int z = 1;
	for(; ; ){
		cout<<"Lu"<<endl;
		z++;
		if(z == 3){
			break;
		}
	}
	return 0;
}
