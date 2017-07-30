#include<iostream>
using namespace std;

int calalph(int *arr,int n)
{
	int k,l=0;
	k=n-1;
	while(l<=k)
	{

		if(arr[l]==0)
		l++;
		if(arr[k]==1)
		k--;
		if(arr[l]==1)
		{
			while(arr[k]!=0)
			{
				k=k--;
			}
			swap(arr[l],arr[k]);
		k--;
		l++;
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i];
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	calalph(arr,n);
}
