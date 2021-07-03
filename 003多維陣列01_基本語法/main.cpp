#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int sales[3][4];
	sales[0][0] = 120;
	sales[1][1] = 240;
	cout<<sales[1][1]<<endl;
	*/
	
	int array2D[][3] = {{1,2,3}, {4,5,6},{7,8,9},{10,11,12}};
	for(int i = 0; i < 4;i++){
		for(int j = 0; j < 3; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	int array2D2[5][2] = {{0}};
	for(int i = 0; i < 5;i++){
		for(int j = 0; j < 2; j++){
			cout<<array2D2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}
