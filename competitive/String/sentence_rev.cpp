#include <iostream>
using namespace std;

void reverse(string &s,int begin,int end)
{
        while(begin < end)
        {
                swap(s[begin],s[end]);
                begin++;
                end--;
        }
}

void reverseWords(string &A) {
        string begin = A;
        string temp = A;
        int i=0;
        while(temp[i] != '\0')
        {
                i++;
                if(temp[i] == '\0') reverse(begin,temp[i-1]);
                else if(temp[i] == " ")
                {
                        reverse(begin, temp[i-1]);
                        begin = temp[i+1];
                }
        }
        reverse(A, temp[i-1]);
        return;
}

int main()
{
        string s;
        getline(cin,s);
        reverse(s,0,s.length()-1);
        cout<<s;
        //reverseWords(s);
        return 0;
}
