#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(int i = 1; i <= 100; i++){
		cout<<i<<" ";
	}
	
	int total = 0;
	//total = total + 1;
	for(int a = 0; a <= 100; a++){
		total += a;
	}
	cout<<total<<endl;
	
	return 0;
}
