#include <iostream>
using namespace std;
#define MAX 100007
int multiply(int x, int res[], int res_size);
void factorial(int n)
{

    int res[MAX];
    res[0]=1;
    int res_size =1;
    for(int x=2;x<=n;x++)
        res_size=multiply(x,res,res_size);
    for(int i=res_size-1;i>=0;i--)
        cout<<res[i];
}
int multiply(int x, int res[], int res_size)
{
    int carry =0;
    for(int i=0; i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        //cout<<prod<<endl;
        res[i]=prod%10;
        carry=prod/10;
    }

    while(carry)
    {
        //cout<<"here";
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    cout<<"size "<<res_size<<endl;
    return res_size;
}
 int main()
 {
     int n,i;
     cin>>n;
     while(n--){
        cin>>i;
        factorial(i);
        cout<<endl;
     }
     return 0;
 }
