#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int k=0,count=0,l;
    string s;
    map<int,string> m;
    cin>>s;
    //vector<int> v;
    l=s.size();
    for(int j=1;j<=s.size();j++)
    for(int i=0;i<s.size();i++)
    {
        if(j>=2){
                if(i<=l-j){
            m[k]=s.substr(i,j);
            //v.push_back(k);
            count++;
            k++;
                }
        }
        else
        {
            m[k]=s.substr(i,j);
            //v.push_back(k);
            count++;
            k++;
        }
    }
    //sort(v.begin(),v.end());
    /*for(int k=0;k<count;k++)
    {
        cout<<m[k]<<endl;
    }*/

    return 0;
}
