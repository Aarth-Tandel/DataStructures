
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
        //int index=big;//l[m][n];
        //cout<<index;
        //char lcs[index +1];
        //cout<<"here";
        /*lcs[index]='\0';

           int i=m, j=n;

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
           cout<<lcs;*/
}

int main()
{
        string str1,str2;
        cin>>str1>>str2;
        lcs(str1,str2,str1.length(),str2.length());
        return 0;
}
