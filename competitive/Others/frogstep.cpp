#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	cout<<"\n Enter the 4 values";
	int arr[4];
	for(int i=0;i<4;i++){
		cin>>arr[i];
	}
	int num,x=0,y=0,z=0;
	for(int i=0;i<4;i++){
		num=arr[i];
		x=num/3;
		y=num%3;
		z=x*35;
		switch(y){
			case 0: {
				z+=0;
			}break;
			case 1: {
				z+=20;
			}break;
			case 2: {
				z+=30;
			}break;
		}
	cout<<"\n"<<z;
	}
}
