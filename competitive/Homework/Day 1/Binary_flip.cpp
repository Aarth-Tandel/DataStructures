#include<iostream>
using namespace std;

int pos(int a[],int n)
{
    int temp[100],j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            temp[j]=i;
            //cout<<temp[j]<<" ";
            j++;
        }
    }
    int big=temp[0]+1,temp2;
    for(int i=1;i<j;i++)
    {
        temp2=temp[i+1]-temp[i-1];
        if(big<(temp2-1))   big=i;
    }
    return big;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<pos(a,n);
    return 0;
}
