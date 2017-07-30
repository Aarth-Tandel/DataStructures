#include <stdio.h>
int main()
{
    int test_case = 0,x, y,ops;
    scanf("%d", &test_case);
    while (test_case--) {
        ops = 0;
        scanf("%d %d", &x, &y);
        if(x>y){
        while(x!=y){
                if(x&1==1 && x!=1){
                    x = --x >> 1;
                    ++ops;
                }

                else if(x%2==0){
                    x=x >> 1;
                    ++ops;
                }
                if(x==1){
                    x=x<<1;
                    ++ops;
                }
        }
        }
        else if(x<y){
        while(x!=y){
                 if(x&1==1 && x!=1){
                    x = --x >> 1;
                    ++ops;
                }
                else if(x%2==0){
                    x=x<<1;
                    ++ops;
                }

                if(x==1){
                    x=x<<1;
                    ++ops;
                }
        }
        }
    printf("%d\n", ops);
    }
    return 0;
}
