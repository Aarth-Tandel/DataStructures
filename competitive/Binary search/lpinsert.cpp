#include<iostream>
using namespace std;

int search(int *a,int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key){
            return i;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<key && a[i+1]>key)
            return i+1;
    }
    return 0;
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
    cout<<element;
    return 0;
}

