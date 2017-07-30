#include<iostream>
using namespace std;

struct que{
int a[5];
int f;
int r;
int size;
}s;

int full()
{
    if(s.size == 5)   return 1;
    else return 0;
}

int empt()
{
    if(s.size==0) return 1;
    else return 0;
}

void dequeue()
{
    if(!empt()) {
        s.f=(s.f+1)%5;
        s.size--;
        //cout<<s.f;
        return ;
    }
    else return;
}

void enqueue(int data)
{
    if(s.f==-1 && s.r==-1){
        s.f=0;s.r=0;
        s.size++;
        cout<<data<<" "<<"Enqueued in Queue"<<endl;
        s.a[s.r]=data;
    }
    else if(!full()){
        s.r=(s.r+1)%5;
        s.a[s.r]=data;
        s.size++;
        cout<<data<<" "<<"Enqueued in Queue"<<endl;
    }
    else cout<<"Overflow"<<endl;
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
    s.size=0;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    dequeue();
    peek();
    return 0;
}

