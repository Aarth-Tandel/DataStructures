#include <iostream>
using namespace std;

int main()
{
        int n;
        cin>>n;
        while(n--)
        {
                int k;
                cin>>k;
                long long int a[10000][10000];
                int winner = 0, tie = 0;
                int temp = 0, max = 0;


                for(int i=0; i<k; i++)
                {
                        cin>>a[i][0];
                        for(int j=0; j<a[i][0]; j++)
                                cin>>a[i][j+1];
                }

                /* for(int i=0; i<k; i++) {
                   cout<<a[i][0]<<" ";
                         for(int j=0; j<a[i][0]; j++)
                         {
                                 cout<<a[i][j+1]<<" ";
                         }
                         cout<<endl;
                    }*/

                for(int i=0; i<k; i++)
                {
                        int distinct = 1,one = 1, two=1, three=1,four=1, five=1, six=1;
                        for(int j=2; j<=a[i][0]; j++)
                        {
                                if(a[i][j] == 1 && one==1) {
                                        one++;
                                        distinct++;
                                }
                                if(a[i][j] == 2 && two==1) {
                                        two++;
                                        distinct++;
                                }
                                if(a[i][j] == 3 && three==1) {
                                        three++;
                                        distinct++;
                                }
                                if(a[i][j] == 4 && four==1) {
                                        four++;
                                        distinct++;
                                }
                                if(a[i][j] == 5 && five==1) {
                                        five++;
                                        distinct++;
                                }
                                if(a[i][j] == 6 && six==1) {
                                        six++;
                                        distinct++;
                                }
                        }
                        if(distinct == 4) distinct = 1;
                        if(distinct == 5) distinct = 2;
                        if(distinct == 6) distinct = 4;
                        else distinct = 0;

                        temp = a[i][0] + distinct;
                        if(temp == max) tie =1;
                        if(temp > max)
                        {
                                tie = 0;
                                winner = i;
                                max = temp;
                        }
                }

                if( tie == 1) cout<<"tie"<<endl;
                else if( winner == 0) cout<<"chef"<<endl;
                else cout<<winner+1<<endl;
        }
        return 0;
}
