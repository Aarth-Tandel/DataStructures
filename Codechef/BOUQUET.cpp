#include <iostream>
using namespace std;

int tree(long long int leaves[][3])
{
        long long int column =0, row=0;
        for(long long int i=0; i<3; i++)
        {
                long long int temp = 0;
                for(long long int j=0; j<3; j++)
                {
                        temp += leaves[i][j];
                }
                if(column < temp) column = temp;
        }

        for(long long int i=0; i<3; i++)
        {
                long long int temp = 0;
                for(long long int j=0; j<3; j++)
                {
                        temp += leaves[j][i];
                }
                if(row < temp) row = temp;
        }

        long long int out = max(column,row);
        if(out%2 == 0) out = out-1;
        return out;
}

int main()
{
        int T;
        cin>>T;
        while(T--)
        {
                //cout<<r <<endl;
                long long int leaves[3][3];
                for(long long int i=0; i<3; i++) {
                        for(long long int j=0; j<3; j++) {
                                cin>>leaves[i][j];
                        }
                }
                cout<<tree(leaves)<<endl;

        }
        return 0;
}
