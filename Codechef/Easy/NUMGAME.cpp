#include<stdio.h>
int main()
{
    long int n;
    scanf("%d",&n);
    while(n--)
    {
        int i;
        scanf("%d",&i);
        if(i%2==0) printf("ALICE\n");
            else printf("BOB\n");
    }
    return 0;
}
