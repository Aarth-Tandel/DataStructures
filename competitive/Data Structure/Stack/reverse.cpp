#include<iostream>
#define MAX_SIZE 10
using namespace std;

struct stk{
string a[MAX_SIZE];
int top;
};
stk s;

int isfull()
{
    if(s.top>=MAX_SIZE-1)   return 1;
    return 0;
}

int isempty()
{
    if(s.top == -1)    return 1;
    return 0;
}

void push(string k)
{
    if(!isfull())
    {
        s.top++;
        s.a[s.top]=k;
        //cout<<k<<" "<<"Pushed into stack"<<endl;
        return;
    }
    cout<<"stack Overflow"<<endl;
    return ;
}

string peek()
{
    if(!isempty())
    {
        return s.a[s.top];
    }
    cout<<"Sack is empty";
    return "No";
}

void pop()
{
    if(!isempty())
    {
        cout<<s.a[s.top]<<" "<<"Popped from stack"<<endl;
        s.top--;
        return;
    }
    cout<<"Stack Underflow"<<endl;
    return ;
}

int main()
{
    s.top=-1;
    for(int i=0;i<MAX_SIZE-1;i++){
        cin>>s.a[i];
        push(s.a[i]);
    }
    pop();
    pop();
    pop();
    pop();
    pop();
    peek();
    return 0;
}
