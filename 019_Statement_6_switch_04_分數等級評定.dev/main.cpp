#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	cout<<"�п�J���� => "<<endl;
	int score;
	cin>>score;
	
	string s;
	int i = score / 10;
	switch(i) {
		case 10:
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			s = "�B";
			break;
		
	}
	if(score < 0 || score > 100){
		s = "���ƿ��~";
	}
	
	cout<<s<<endl;
	*/
	
	/*
	cout<<"�п�J���� => "<<endl;
	int score;
	cin>>score;
	
	
	string s;
	if(score >= 0 && score <= 100){
		int i = score / 10;
		switch(i) {
			case 10:
			case 9:
				s = "�u";
				break;
			case 8:
				s = "��";
				break;
			case 7:
				s = "�A";
				break;
			case 6:
				s = "��";
				break;
			default:
				s = "�B";
				break;
		}
	}else {
		cout<<"���ƿ��~"<<endl; 
	}
	*/
	/*
	cout<<"�п�J���� => "<<endl;
	int score;
	cin>>score;
	string s = "���ƿ��~";
	int i = score / 10;
	switch(i) {
		case 10:
			if(score > 100) {
				break;
			}
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			}
			s = "�B";
			break;
		
	}
	cout<<s<<endl;
	*/
	
	cout<<"�п�J���� => "<<endl;
	int score;
	cin>>score;
	string s = "���ƿ��~";
	int i = score / 10;
	switch(i) {
		case 10:
			if(score > 100) {
				break;
			}
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			} else if(score < 60){
				s = "�B";
			} else {
				s = "�u";
			}			
			break;
	}
	cout<<s<<endl;
	
	return 0;
}
