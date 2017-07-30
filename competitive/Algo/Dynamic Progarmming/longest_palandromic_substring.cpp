
#include <iostream>
#include <stdlib.h>
using namespace std;

void lcs(string str1, string str2, int m, int n)
{
        int l[m+1][n+1],temp=0,big=0;
        for(int i=0; i<=m; i++)
        {
                for(int j=0; j<=n; j++)
                {
                        if(i==0 || j==0) l[i][j]=0;

                        else if(str1[i-1]==str2[j-1]) {
                                l[i][j]=l[i-1][j-1]+1;
                                temp=l[i][j];
                        }
                        else l[i][j]=0;
                        if(big<temp) big=temp;
                }
        }
        cout<<big;
}

int main()
{
        string str1,str2;
        cin>>str1;
        str2=str1;
        int l=0, h=str1.length()-1;
        while(l<h)
        {
                swap(str2[l],str2[h]);
                l++;
                h--;
        }
        cout<<str2<<endl;
        lcs(str1,str2,str1.length(),str2.length());
        return 0;
}
