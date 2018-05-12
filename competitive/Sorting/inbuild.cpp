#include<iostream>
using namespace std;

void cnt(string str)
{
    int count=0;
    char *p;
    p=&str[0];
    while(*p!='\0'){
        count++;
        *p++;
    }
    cout<<count;
    return;
}

int main()
{
    string str;
    cin>>str;
    cnt(str);
    //cout<<str[5];
    return 0;
}
