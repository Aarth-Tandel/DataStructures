#include <iostream>
using namespace std;

void merge(int *a,int l,int m,int h)
{
  int i,j,k;
  cout<<m;
    int n1=m-l+1;
    int n2=h-m;

    int L[n1],R[n2];

    for (i=0;i<n1;i++)
        L[i]=a[l+i];
    for (j=0;j<n2;j++)
        R[j]=a[m+1+j];

  int ptr1=0,ptr2=0;
  for(int i=0;i<n2+n1;i++)
  {
      if(ptr1<n1 && ptr2<n2 && L[ptr1]<R[ptr2])
      {
          a[i]=L[ptr1];
          ptr1++;
      }
      else if(ptr1<n1 && ptr2<n2 && L[ptr1]>R[ptr2])
      {
          a[i]=R[ptr2];
          ptr2++;
      }
      else if(ptr1==n1)
      {
          a[i]=R[ptr2];
          ptr2++;
      }
      else
      {
          a[i]=L[ptr1];
          ptr1++;
      }
  }
}

void mergesort(int *a,int l,int h)
{
  if(l<h)
  {
    int m=l+(h-1)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);
  }
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=0;
  mergesort(a,l,n-1);
  for(int i=0;i<n;i++)
    cout<<a[i]<<"";
  return 0;
}
