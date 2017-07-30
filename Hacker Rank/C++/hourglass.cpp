#include <iostream>
using namespace std;

int main()
{
        int a[6][6];

        for(int i = 0; i < 6; i++)
                for(int j = 0; j < 6; j++)
                        cin>>a[i][j];

        int temp = 0, max = -99;

        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        temp = 0;
                        for (int k = j; k < j + 3; k++)
                        {
                                // cout<<a[i][k]<<" "<<a[i+2][k]<<endl;
                                temp += a[i][k];
                                temp += a[i+2][k];
                        }
                        // cout<<a[i+1][j+1]<<endl;
                        temp += a[i + 1][j + 1];
                        if(temp > max) max = temp;
                }
        }
        cout<<max<<endl;
        return 0;
}
