#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year = 1;
	while(year != 0){
		cout<<"�п�J�@�Ӧ~��(�褸�~) �Ϋ� 0 ���} => ";
		cin>>year;
		
		bool answer = false;
		if(year != 0) {
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				answer = true;
			}
			
			if(answer){
				cout<<"��~"<<endl; 
			}else {
				cout<<"���~"<<endl; 
			}
		}else{
			cout<<"���¨ϥ�"<<endl; 
		}
			
	}
		
	
	return 0;
}
