#include <bits/stdc++.h>
#include <string>
#include <iterator>
using namespace std;

vector<int> pi;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            pi.push_back(p);
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> sol;
    SieveOfEratosthenes(n);
    for (int i = 1; i <= n; i++)
    {
        int l = k;
        set<int> u;
        u.insert(i);
        while (l--)
        {
            if (u.size() != 1)
            {
                //cout<<"here";
                set<int>::iterator itr;
                vector<int> c;
                for (itr = u.begin(); itr != u.end(); ++itr)
                {
                    c.push_back(*itr);
                    //if(l==0)
                     //cout<<" itr "<<*itr;
                }
                //cout<<endl;    
                for (int k = 0; k < c.size(); k++)
                {
                    for(int y=0; y<pi.size();y++){
                    if (c[k] / pi[y] > 0)
                        u.insert(c[k] / pi[y] > 0);

                    u.insert(c[k] * pi[y]);
                    // if(l==0){
                    //cout<<"mul "<<(c[k] * pi[count])<<endl;
                    // cout<<"div "<<(c[k] / pi[count])<<endl;
                    // }
                    }
                }
            }
            else
            {
                //cout<<"Here";
                for (int j = 0; j < pi.size(); j++)
                {
                    if (i / pi[j] > 0)
                    {
                        u.insert(i / pi[j] > 0);
                    }
                    //cout<<"div"<<(i / pi[j])<<endl;
                    u.insert(i * pi[j]);
                    //cout<<"div"<<(i * pi[j])<<endl;
                }
            }
            //cout<<"l "<<u.size()<<endl;
        }
        // set<int>::iterator itr;
        // for (itr = u.begin(); itr != u.end(); ++itr)
        // {
        //     //c.push_back(*itr);
        //     //if(l==0)
        //      cout<<"itr "<<*itr;
        // }
        // cout<<endl;
        //cout << "l " << u.size() << endl;
        sol.push_back(u.size());
    }

    long long int sum = 0;
    //cout<<sol.size();
    for (int i = 1; i <= sol.size(); i++)
    {
        sum += sol[i - 1] * i;
        //cout<<sum<<endl;
    }

    cout << (sum % 1000000007) << endl;
    return 0;
}