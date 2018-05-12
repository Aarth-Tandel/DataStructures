#include<iostream>
#include<stdlib.h>
using namespace std;

string reverse(string s,int n)
{
    for(int i=0;i<n/2;i++)    swap(s[i],s[n-i]);
    return s;
}

void lcs(string str1, string str2, int m)
{
    int l[m+1][m+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)    l[i][j]=0;
            else if(str1[i-1]==str2[j-1])   l[i][j]=l[i-1][j-1]+1;
            else    l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }

    int index=l[m][m];
    //cout<<index;
    char lcs[index +1];
    //cout<<"here";
    lcs[index]='\0';

    int i=m, j=m;

    while(i > 0 && j>0)
    {
        if(str1[i-1]==str2[j-1])
        {
            lcs[index -1]=str1[i-1];
            i--;
            j--;
            index--;
        }

        else if(l[i-1][j]>l[i][j-1])    i--;
        else j--;
    }
    cout<<lcs;
}

int main()
{
    string str1,str2;
    cin>>str1;
    str2=reverse(str1,str1.length()-1);
    //cout<<str2<<" ";
    lcs(str1,str2,str1.length());
    return 0;
}
