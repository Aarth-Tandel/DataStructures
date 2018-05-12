#include<iostream>
using namespace std;

struct que{
int a[5];
int f;
int r;
}s;



int full()
{
    if(s.r == 4)   return 1;
    else return 0;
}

int empt()
{
    if(s.f>s.r || s.f==-1 && s.r==-1) return 1;
    else return 0;
}

void dequeue()
{
    if(!empt()) {
        s.f++;
        //cout<<s.f;
        return ;
    }
    else return;
}

void enqueue(int data)
{
    if(s.f==-1 && s.r==-1){
        s.f=0;s.r=0;
        cout<<data<<" "<<"Enqueued in Queue"<<endl;
        s.a[s.r]=data;
    }
    else if(!full()){
        s.r++;
        s.a[s.r]=data;
        cout<<data<<" "<<"Enqueued in Queue"<<endl;
    }
    cout<<"Overflow";
    return;
}

void peek()
{
    if(!empt())    cout<<s.a[s.f];
    return ;
}

int main()
{
    s.f=-1;
    s.r=-1;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue();
    dequeue();
    enqueue(6);
    peek();
    return 0;
}
