#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J���� => ";
	int score;
	cin>>score;
	
	/* 
	string s = "";
	if(score >= 90){
		s = "�u";
	}else if(score >= 80 && score < 90){
		s = "��";
	}else if(score >= 70 && score < 80){
		s = "�A";
	}else if(score >= 60 && score < 70){
		s = "��";
	}else if(score >= 0 && score < 60){
		s = "�B";
	}else {
		s = "���ƿ��~";
	}
	*/
	
	/*
	string s = "���ƿ��~";
	if(score >= 90){
		s = "�u";
	}else if(score >= 80 && score < 90){
		s = "��";
	}else if(score >= 70 && score < 80){
		s = "�A";
	}else if(score >= 60 && score < 70){
		s = "��";
	}else if(score >= 0 && score < 60){
		s = "�B";
	}
	*/
	
	string s = "���ƿ��~";
	if(score >= 90){
		s = "�u";
	}else if(score >= 80){
		s = "��";
	}else if(score >= 70){
		s = "�A";
	}else if(score >= 60){
		s = "��";
	}else if(score >= 0){
		s = "�B";
	}
	if(score > 100 || score < 0){
		s = "���ƿ��~";
	}
		
	cout<<s<<endl;
	return 0;
}
