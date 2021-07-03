#include <iostream>
using namespace std;

void showInfo();
void showYear(int year);
void showDate(int year, int month, int day);
int getTotal(int start, int end);

void showInfo(){
	cout<<"�y�ݤ��q"<<endl;
	cout<<"�a�}:��饫�P�ڧJ��24��"<<endl;
	cout<<"�q��:033123456"<<endl;
	cout<<"�ǯu:762363263228"<<endl;
	cout<<"E-mail: annsnd@gamil.com"<<endl; 
}

void showYear(int year){
	if(year< 1000 || year > 3000){
		return;	//return�i�H�פ��k 
	}
	cout<<"�~��:"<<year<<endl; 
}

void showDate(int year, int month, int day){
	if(year < 1000 || year > 3000){
		return;	//return�i�H�פ��k
	}
	if(month < 1 || month > 12){
		return;
	}
	if(day < 1){
		return;
	}
	if(day > 31){
		return;
	}
	cout<<"���: "<<year<<"/"<<month<<"/"<<day<<endl; 
}

int getTotal(int start, int end){
	if(start == end){
		return start;
	}
	int total = 0;
	for(int i = start; i <= end; i++){
		total += i;
	}
	
	return total;
}
