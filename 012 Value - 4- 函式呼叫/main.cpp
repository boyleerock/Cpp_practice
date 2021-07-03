#include <iostream>
using namespace std;
#include <cmath> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//C++ API http://www.cplusplus.com/reference/

int main(int argc, char** argv) {
	cout<<"請輸入任一整數 => ";
	int number;
	cin>>number;
	
	double answer = sqrt(number);
	cout<<number<<"的平方根為: "<<answer<<endl; 
	
	if(sqrt(number) > 10) {
		cout <<"他的值大於10"<<endl;
	}
	return 0;
}
