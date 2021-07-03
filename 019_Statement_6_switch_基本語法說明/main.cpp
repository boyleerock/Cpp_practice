#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入代號(0~3) => ";
	int a;
	cin>>a;
	
	const int c = 0;
	
//	string b = "輸入錯誤";
	string b;
	a = a % 4;
	switch(a) {
		case c:
			b = "春天";
			break;
		case c + 1:
			b = "夏天";
			break;
		case c + 2:
			b = "秋天";
			break;
		case c + 3:
			b = "冬天";
			break;
		default:
			b = "輸入錯誤";
	}
	cout<<"現在是: "<<b<<endl; 
	
	return 0;
}
