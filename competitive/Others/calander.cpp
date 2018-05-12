#include <iostream>
using namespace std;

int diff(int year, int x)
{
  int z;
  if(x>year)  z=x-year;
  else z=year-x;
  return z;
}

int main()
{
  int x=1900,z,year;
  string a[]={"Sunday" ,"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };
  cout<<"Enter the Year";
  cin>>year;
  z=diff(year,x);
  int j=z/4;
  int k=z-j;
  int l= j*2 + k*1;
  int m=l%7;
  cout<<a[m];
  return 0;
}
