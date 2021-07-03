#include <iostream>
using namespace std;
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	cout<<"Please enter a year => ";
	int year;
	cin>> year;
	
	bool answer = false;
	if(year % 4 == 0 && year % 100 != 0){
		answer = true;
	}else if( year % 400 == 0){
		answer = true;
	}else {
		answer = false;
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	} else if (!answer){
		cout<<"It is a normal year."<<endl;
	}
	*/
	
	cout<<"Please enter a year => ";
	int year;
	cin>> year;
	
	bool answer = false;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		answer = true;
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	} else if (!answer){
		cout<<"It is a normal year."<<endl;
	}
	
	return 0;
}
