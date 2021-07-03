/*
 * 002蝴皚- 程, 程, 逼.cpp
 *
 *  Created on: 23 Aug 2020
 *      Author: BoyLee
 */

#include <iostream>
using namespace std;

int main(){

	int score[5];
	int length = 5;
	for(int i = 0; i < length; i++){
		cout<<"叫块だ计 => ";
		cin>>score[i];
	}

	cout<<"﹑块だ计琌: ";
	for(int i = 0; i < length; i++){
		cout<<score[i]<<"\t";
	}
	int biggest = score[0];
	
	//キАだ计 
	int total = 0;
	for(int i = 0; i < length; i++){
		total += score[i];
	}
	cout<<"キАだ: "<< total/ length<< endl;
	
	//程蔼だ 
//	if(biggest < score[1]){
//		biggest = score[1];
//	}
//	if(biggest < score[2]){
//			biggest = score[2];
//		}
//	if(biggest < score[3]){
//			biggest = score[3];
//		}
//	if(biggest < score[4]){
//			biggest = score[4];
//		}
	for(int i = 1; i < length; i++){
		if(biggest < score[i]){
			biggest = score[i];
		}
	}
	cout<<"程蔼だ: "<<biggest<<endl;
	
	//程だ 
	int smallestIndex = 0;
	for(int i = 1; i < length; i++){
		if(score[smallestIndex] > score[i]){
			smallestIndex = i;
		}
	}
	cout<<"程だ: "<<score[smallestIndex]<<endl;
	
	//逼 
	for(int j = 0; j < length; j++){
		int biggestIndex = j;
		for(int i = 1; i < length; i++){
			if(score[biggestIndex] < score[i]){
				biggestIndex = i;
			}
		}
		int temp = score[j];
		score[j] = score[biggestIndex];
		score[biggestIndex] = temp;
	}
	
	/*
	int biggestIndex = 0;
	for(int i = 1; i < length; i++){
		if(score[biggestIndex] < score[i]){
			biggestIndex = i;
		}
	}
	int temp = score[0];
	score[0] = score[biggestIndex];
	score[biggestIndex] = temp;
	----------------------------------------------
	int biggestIndex = 1;
	for(int i = biggestIndex + 1; i < length; i++){
		if(score[biggestIndex] < score[i]){
			biggestIndex = i;
		}
	}
	int temp = score[1];
	score[1] = score[biggestIndex];
	score[biggestIndex] = temp;
	---------------------------------------------
	int biggestIndex = 2;
	for(int i = biggestIndex + 1; i < length; i++){
		if(score[biggestIndex] < score[i]){
			biggestIndex = i;
		}
	}
	int temp = score[2];
	score[2] = score[biggestIndex];
	score[biggestIndex] = temp;
	.......
	.....
	....
	...
	*/
	cout<<"逼だ计琌: ";
	for(int i = 0; i < length; i++){
		cout<<score[i]<<"\t";
	}
	
	return 0;
}



