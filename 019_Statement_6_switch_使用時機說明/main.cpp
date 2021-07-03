#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入代號 (A,B,C,D) => ";
	char a;
	cin>>a;
	
	string b = "輸入錯誤";
	switch(a){
		case 'A':
			b = "春天";
			break;
		case 'B':
			b = "夏天";
			break;
		case 'C':
			b = "秋天";
			break;
		case 'D':
			b = "冬天";
			break;	
		
	} 
	
	cout<<"現在是:"<<b<<endl; 
	return 0;
}
