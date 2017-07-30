#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,count;
  string a,b;
  cin>>n;
  while(n--){
    count=0;
    cin>>a>>b;
    int q=a.length();
    if(a.length()!=b.length()) cout<<"NO"<<endl;
    else{
      for(int i=0;i<q;i++){
        if(a[i]==b[i] || (a[i]=='?' || b[i]=='?')) count++;
    }
    }
    if(count==a.length()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
return 0;
}
