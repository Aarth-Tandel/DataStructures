#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int no;
    printf("Enter a no: ");
    scanf("%d", &no);
    cout<<(no & 1);
    return 0;
}
