    #include<iostream>
    #include<limits.h>
    #include<algorithm>
    using namespace std;

    struct node{
    long ymax;
    long index;
    };


    bool sortymax(node i,node j)
    {
    return i.ymax<j.ymax;
    }

    int main()
    {
    long t,n,m,x,y,i,j,k,arr[100012];
    node p[100012];
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    for(j=0;j<n;j++)
    {
    cin>>m;
    p[j].ymax=LONG_MIN;
    cout<<p[j].ymax;
    for(k=0;k<m;k++)
    {
    cin>>x>>y;
    if(y>p[j].ymax)
    p[j].ymax=y;
    }
    p[j].index=j;
    }
    sort(p,p+n,sortymax);
    for(j=0;j<n;j++)
    {
    arr[p[j].index]=j;
    }
    for(j=0;j<n;j++)
    {
    cout<<arr[j]<<" ";
    }
    cout<<endl;
    }
    return 0;
    }
