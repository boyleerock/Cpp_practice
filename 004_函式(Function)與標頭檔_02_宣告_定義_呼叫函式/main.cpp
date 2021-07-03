#include <iostream>
using namespace std;
 
#include "MyHeader.h"

int main(int argc, char** argv) {
	showInfo();
	showYear(1999);
	showDate(2019, 5, 3);
	
	int total = getTotal(1000, 1000);
	cout<<total<<endl;

	return 0;
}
