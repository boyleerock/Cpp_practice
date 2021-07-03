#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year = 1;
	while(year != 0){
		cout<<"請輸入一個年份(西元年) 或按 0 離開 => ";
		cin>>year;
		
		bool answer = false;
		if(year != 0) {
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				answer = true;
			}
			
			if(answer){
				cout<<"潤年"<<endl; 
			}else {
				cout<<"平年"<<endl; 
			}
		}else{
			cout<<"謝謝使用"<<endl; 
		}
			
	}
		
	
	return 0;
}
