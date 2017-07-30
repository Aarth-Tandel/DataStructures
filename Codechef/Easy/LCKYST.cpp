#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--){
      long long int i,j;
      cin>>i;
      j=i;
      while(j%10==0) j=j/10;
      while(j%5==0){
        i=i*4;
        j=j/5;
      }
      cout<<i<<endl;
    }
    return 0;
}
