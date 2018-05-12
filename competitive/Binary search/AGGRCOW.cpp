#include<conio.h>
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int workload(vector<int> vect,int k)
{
	sort(vect.begin(),vect.end());
	int n=vect.size();
	int hi=accumulate(vect.begin(),vect.end(),0);
	int low=*max_element(vect.begin(),vect.end());
	int u;
	while(low<hi)
	{
		int mid=(hi+low)/2;
		int r=1,l=0;
		for(int i=0;i<n;i++)
		{
			if(l+vect[i]<=mid)
			{
				l+=vect[i];
			}
			else
			{
				++r;

				l=vect[i];
			}
		}
		u=r;
		if(r<=k)
		hi=mid;
		else
		low=mid+1;
	}
	return low;
}
int main()
{
	vector<int> x;
	int i,y,n,k;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>y;
		x.push_back(y);
	}
	cout<<workload(x,k);
	getch();
	return 0;
}
