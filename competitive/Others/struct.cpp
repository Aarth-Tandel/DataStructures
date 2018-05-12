#include<iostream>
using namespace std;

struct bio{
    int age,weight,height;
}x,y,z;

int main()
{
    cout<<"age"<<" ";
    cin>>x.age>>y.age>>z.age;
    cout<<"weight"<<" ";
    cin>>x.weight>>y.weight>>z.weight;
    cout<<"Height"<<" ";
    cin>>x.height>>y.height>>z.height;

    int avg=(x.age+y.age+z.age)/3;
    int avgw=(x.weight+y.weight+z.weight)/3;
    int avgh=(x.height+y.height+z.height)/3;

    cout<<avg<<avgw<<avgh;
    return 0;
}
