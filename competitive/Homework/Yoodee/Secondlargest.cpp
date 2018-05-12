#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cout<<"\n Enter the number of elements in the array";
	int n,j;
	cin>>n;
	int *arr=new int[n];
	cout<<"\n Enter the elements in the array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<2;i++){
		for(j=0;j<n;j++) {
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"\n Second largest element in the array is "<<arr[n-1];
	return 0;
}
