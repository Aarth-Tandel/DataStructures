#include<iostream>
#include<stack>
using namespace std;
int main()
{
	char a[5];
	for(int i=0;i<5;i++)
{
	cin>>a[i];
}
stack<char>stk;
//for(int i=0;i<5;i++)
//{
stk.push(a[0]);
stk.push(a[1]);
stk.push(a[2]);
stk.push(a[3]);
//}
cout<<stk.top();
/*while(!stk.size()==0)
{
	cout<<stk.top();
	stk.pop();
}*/
return 0;
}
