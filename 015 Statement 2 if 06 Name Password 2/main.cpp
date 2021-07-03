#include <iostream>
using namespace std;
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Please enter your name => "<<endl;
	string name;
	cin>>name;
	
	cout<<"Please enter your password => "<<endl;
	string password;
	cin>>password;
	
	int answer = 0;
	if(name == "abcd" && password == "1234"){
		answer = 1;
	}else if (name == "abcd" && password != "1234"){
		answer = 2;
	}else if (name != "abcd" && password == "1234"){
		answer = 3;
	}else {
		answer = 4;
	}
	
	if(answer == 1){
		cout<<"Welcome"<<endl;
	}else if (answer == 2){
		cout<<"Password is wrong."<<endl;
	}else if (answer == 3){
		cout<<"name is wrong."<<endl;
	}else {
		cout<<"Name and Password are all wrong."<<endl;
	}
	
	return 0;
}
