#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array2D[4][5];
	int number = 1;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			array2D[i][j] = number++;
		}
		cout<<endl;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Â½ÂàÅo
	for(int i = 0; i < 4 / 2; i++){
		for(int j=0; j < 5; j++){
			int temp = array2D[i][j];
			array2D[i][j] = array2D[3-i][j];
			array2D[3-i][j] = temp;
		} 
	}		

	cout<<"Â½Âà«á: "<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Ãè®gÅo 
	for(int i = 0; i < 4/2; i++){
		for(int j=0; j < 5; j++){
			int temp = array2D[j][4-i];
			array2D[j][4-i] = array2D[j][i];
			array2D[j][i] = temp;
		} 
	}
//	int temp = array2D[1][0];
//	array2D[1][0] = array2D[1][4];
//	array2D[1][4] = temp;
			
	cout<<"Ãè®g«á: "<<endl;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
