#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}

