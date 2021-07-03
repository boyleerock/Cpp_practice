#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//?:(Ternary 三元條件運算符號)

int main(int argc, char** argv) {
	int a = 5, b = 6;	//a 跟 b 的絕對值 
	int c = (a > b? a - b : b - a);
	cout<<c<<endl;
	return 0;
}
