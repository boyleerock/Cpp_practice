#include <iostream>
using namespace std;
#include <cmath> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//C++ API http://www.cplusplus.com/reference/

int main(int argc, char** argv) {
	cout<<"�п�J���@��� => ";
	int number;
	cin>>number;
	
	double answer = sqrt(number);
	cout<<number<<"������ڬ�: "<<answer<<endl; 
	
	if(sqrt(number) > 10) {
		cout <<"�L���Ȥj��10"<<endl;
	}
	return 0;
}
