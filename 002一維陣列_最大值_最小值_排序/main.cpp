/*
 * 002�@���}�C- �̤j��, �̤p��, �Ƨ�.cpp
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
		cout<<"�п�J���� => ";
		cin>>score[i];
	}

	cout<<"�p��J�����ƬO: ";
	for(int i = 0; i < length; i++){
		cout<<score[i]<<"\t";
	}
	int biggest = score[0];
	
	//�������� 
	int total = 0;
	for(int i = 0; i < length; i++){
		total += score[i];
	}
	cout<<"��������: "<< total/ length<< endl;
	
	//�̰��� 
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
	cout<<"�̰�����: "<<biggest<<endl;
	
	//�̧C�� 
	int smallestIndex = 0;
	for(int i = 1; i < length; i++){
		if(score[smallestIndex] > score[i]){
			smallestIndex = i;
		}
	}
	cout<<"�̧C����: "<<score[smallestIndex]<<endl;
	
	//�Ƨ� 
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
	cout<<"�Ƨǫ᪺���ƬO: ";
	for(int i = 0; i < length; i++){
		cout<<score[i]<<"\t";
	}
	
	return 0;
}



