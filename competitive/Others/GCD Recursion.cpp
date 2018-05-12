#include<stdio.h>
#include<iostream>

using namespace std;
int calcgcd(int n1, int n2)
{
    if (n2!=0)
       return calcgcd(n2, n1%n2);
    else 
       return n1;
}
int main() {
	cout<<"\n Enter the two numbers";
	int num1,num2;
	cin>>num1;
	cin>>num2;
	int gcd=calcgcd(num1,num2);
	cout<<"\n GCD of two numbers is "<<gcd;
	
}
