#include <iostream>
using namespace std;

void reversearray(long long int a[], long long int m,long long int n);

void leftrotate(long long int a[],long long int m,long long int n){
  reversearray(a,0,m);
  reversearray(a,m,n);
  reversearray(a,0,n);
}

void reversearray(long long int a[],long long int start,long long int  end){
  int i, temp;
  while(start < end){
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
  }
}


int main() {
  long long int j;
  cin>>j;
  while(j--){
    long long int n,m,a[100000];
    cin>>n>>m;
    for (long long int i = 1; i <= n; i++) a[i]=i;
    leftrotate(a,m,n);
    long long int k,temp,count=0;
    k=1;
    // for (int i = 1; i <= n; i++) cout<<a[i]<<endl;
    while (a[k]!=0) {
      // cout<<"here";
      temp=a[k];
      a[k]=0;
      k=temp;
    }

    for (long long int i = 1; i <= n; i++) {
      if(a[i]==0) count++;
    }
    if(count==n) cout<<"Yes"<<endl;
    else std::cout << "No" <<" "<< n-count << std::endl;
  }
}
