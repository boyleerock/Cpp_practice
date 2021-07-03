#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Please enter your name => ";
	string name= "";
	cin>>name;
    
    cout<<"Please enter your password => ";
	string password= "";
	cin>>password;
	
	bool answer = false;
	if(name == "abcd"){
		if(password == "1234"){
			answer = true;
		}
		
	}
	if(answer){
		cout<<"Welcome."<<endl;
	}
	if(!answer){
		cout<<"Name or password is wrong."<<endl;
	}
	return 0;
}
