#include<iostream>
#define MAX_SIZE 5
using namespace std;

struct stk{
int a[MAX_SIZE];
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

void push(int k)
{
    if(!isfull())
    {
        s.top++;
        s.a[s.top]=k;
        cout<<k<<" "<<"Pushed into stack"<<endl;
        return;
    }
    cout<<"stack Overflow"<<endl;
    return ;
}

int peek()
{
    if(!isempty())
    {
        return s.a[s.top];
    }
    cout<<"Sack is empty";
    return -1;
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
    // s2.top = -1;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    cout<<peek()<<endl;
    pop();
    pop();
    pop();
    pop();
    peek();
    return 0;
}
