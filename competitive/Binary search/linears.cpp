#include<iostream>
using namespace std;

int search(int *a,int key,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key){
            count++;
        }
    }
    if(count!=0)  return count;
    else  return -1;
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
