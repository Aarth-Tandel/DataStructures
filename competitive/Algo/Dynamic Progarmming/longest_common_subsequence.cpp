#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void lcs(int str1[], int str2[], int m, int n)
{
        int L[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
                for (int j = 0; j <= n; j++)
                {
                        if (i == 0 || j == 0)
                                L[i][j] = 0;
                        else if (str1[i - 1] == str2[j - 1])
                                L[i][j] = L[i - 1][j - 1] + 1;
                        else
                                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
                }
        }
        // for (int i = 0; i <= m; i++)
        // {
        //         for (int j = 0; j <= n; j++)
        //                 cout << L[i][j] << " ";
        //         cout << endl;
        // }
        int index = L[m][n];
        vector<int> lcs(index);
        //int lcs[index + 1];
        //lcs[index] = '\0';

        int i = m, j = n;

        while (i > 0 && j > 0)
        {
                //cout<<i<<j;
                if (str1[i - 1] == str2[j - 1])
                {
                        lcs[index - 1] = str1[i - 1];
                        i--;
                        j--;
                        index--;
                }

                else if (L[i - 1][j] > L[i][j - 1])
                        i--;
                else
                        j--;
        }

        for (int i = 0; i < lcs.size(); i++)
                cout << lcs[i] << " ";
        cout<<endl;        
}

int main()
{
        // string str1, str2;
        // cin >> str1 >> str2;
        int n, m, a[1000], b[1000];
        cin >> n >> m;
        for (int i = 0; i < n; i++)
                cin >> a[i];
        for (int i = 0; i < m; i++)
                cin >> b[i];
        lcs(a, b, n, m);
        return 0;
}
