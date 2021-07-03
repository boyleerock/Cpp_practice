#include <iostream>
using namespace std;

void showInfo();
void showYear(int year);
void showDate(int year, int month, int day);
int getTotal(int start, int end);

void showInfo(){
	cout<<"泊毅公司"<<endl;
	cout<<"地址:桃園市星巴克路24號"<<endl;
	cout<<"電話:033123456"<<endl;
	cout<<"傳真:762363263228"<<endl;
	cout<<"E-mail: annsnd@gamil.com"<<endl; 
}

void showYear(int year){
	if(year< 1000 || year > 3000){
		return;	//return可以終止此方法 
	}
	cout<<"年份:"<<year<<endl; 
}

void showDate(int year, int month, int day){
	if(year < 1000 || year > 3000){
		return;	//return可以終止此方法
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
	cout<<"日期: "<<year<<"/"<<month<<"/"<<day<<endl; 
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
