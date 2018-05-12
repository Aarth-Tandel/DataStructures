    #include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        int n, s;
        cin >> n >> s;
        int arr[101];
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;

            int min = (h * 60) + m;
            arr[i] = min;
        }
        int sol = -1;
        bool flag = true;

        if ((s  + 1) <= arr[0])
        {
            sol = 0;
            flag = false;
        }

        if (flag)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int val = arr[i + 1] - arr[i];
                //cout<<val<<endl;
                if (((s * 2) + 2) <= val)
                {
                    //cout<<arr[i];
                    sol = arr[i] + s + 1;
                    break;
                }
            }
        }

        //cout << sol<<endl;;
        if (sol == -1)
        {
            int val = arr[n - 1] + s + 1;
            sol = val;
        }

        //cout << sol;
        int minutes = sol % 60;
        int hours = (sol - minutes) / 60;

        cout << hours << " " << minutes << endl;
        return 0;
    }