#include<iostream>
using namespace std;

int search(int *a,int key,int n)
{
    int count=0,j=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key){
            count++;
        }
        if(count == 1)
            j=i;
    }
    cout<<j<<" "<<count+j-1;
    //return 0;
}

int main()
{
    int n,key,element;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;

    element=search(a,key,n);
    //cout<<element;
    return 0;
}
