#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	//正向的條件 
	for(int i = 1; i <= 10; i++){
		if(i % 3 == 0){
			cout<<i<<"\t";
		}
	}
	cout<<endl;
	
	//反向的條件 
	for(int i = 1; i <= 10; i++){
		if(i % 3 != 0){
			continue;
		}
		cout<<i<<"\t";
	}
	cout<<endl;
	*/
	
	int k = 1;
	for(int i = 1; i <= 3; i++){ 
		for(int j = 1; j <= 5; j++){
			if(i % 2 == 0){
				k = 2;
				break;	//continue
			}
			cout<<j<<"\t";
		}
		cout<<endl;
		if(k == 2){
			break;	//continue
		}
	} 
	return 0;
}
