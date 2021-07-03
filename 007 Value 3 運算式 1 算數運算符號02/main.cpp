#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Enter the beginning day => ";
	int startDay;
	cin>>startDay;
	
	cout<<"Enter the number of days => ";
	int count;
	cin>>count;
	
	int theDay = startDay + count % 7;	//模數 
	theDay = theDay % 7;	//取得連續範圍的整數 
	
	string strStartDay = "";
	switch(startDay){
		case 7:
			strStartDay = "Sunday";
			break;
		case 1:
			strStartDay = "Monday";
			break;
		case 2:
			strStartDay = "Tuesday";
			break;
		case 3:
			strStartDay = "Wednesday";
			break;
		case 4:
			strStartDay = "Thursday";
			break;
		case 5:
			strStartDay = "Friday";
			break;
		case 6:
			strStartDay = "Saturday";
			break;	
		
	}
	string strTheDay = "";
	switch(theDay){
		case 0:
			strTheDay = "Sunday";
			break;
		case 1:
			strTheDay = "Monday";
			break;
		case 2:
			strTheDay = "Tuesday";
			break;
		case 3:
			strTheDay = "Wednesday";
			break;
		case 4:
			strTheDay = "Thursday";
			break;
		case 5:
			strTheDay = "Friday";
			break;
		case 6:
			strTheDay = "Saturday";
			break;	
		
	}
	cout<<"Today is "<<strStartDay<<"."<<" It will be "<<strTheDay<<" after "<<count<< " day(s)."<<endl; 
	
	int x;	//規定 x 的範圍在 1~30 
	x = x % 30 + 1;
	int y;	//規定 y 的範圍在 8~13 
	y = y % 6 + 8;
	
	return 0;
}
