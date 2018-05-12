#include <iostream>
using namespace std;

int count=0;

int area(int set[])

int trap(int set[], int n)
{
  int index = 0;
  for(int i=0; i<n; i++)
    if(set[i] == 0) index++;

  for(int i=index; i<n; i++ )
    for(int j=index; set[j] >= set[i] || j<n; j++)
    {

    }
}
