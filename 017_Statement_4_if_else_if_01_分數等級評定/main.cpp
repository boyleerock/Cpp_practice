#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"叫块だ计 => ";
	int score;
	cin>>score;
	
	/* 
	string s = "";
	if(score >= 90){
		s = "纔";
	}else if(score >= 80 && score < 90){
		s = "ヒ";
	}else if(score >= 70 && score < 80){
		s = "";
	}else if(score >= 60 && score < 70){
		s = "";
	}else if(score >= 0 && score < 60){
		s = "";
	}else {
		s = "だ计岿粇";
	}
	*/
	
	/*
	string s = "だ计岿粇";
	if(score >= 90){
		s = "纔";
	}else if(score >= 80 && score < 90){
		s = "ヒ";
	}else if(score >= 70 && score < 80){
		s = "";
	}else if(score >= 60 && score < 70){
		s = "";
	}else if(score >= 0 && score < 60){
		s = "";
	}
	*/
	
	string s = "だ计岿粇";
	if(score >= 90){
		s = "纔";
	}else if(score >= 80){
		s = "ヒ";
	}else if(score >= 70){
		s = "";
	}else if(score >= 60){
		s = "";
	}else if(score >= 0){
		s = "";
	}
	if(score > 100 || score < 0){
		s = "だ计岿粇";
	}
		
	cout<<s<<endl;
	return 0;
}
