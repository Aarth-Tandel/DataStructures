#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
  int i;
  cin>>i;
  cout<<"Primitive : ";
  cout<<typeid(i).name()<<endl;
  return 0;
}
