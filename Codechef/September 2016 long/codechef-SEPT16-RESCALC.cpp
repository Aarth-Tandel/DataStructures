#include <iostream>
using namespace std;

int maxPoints()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];

	int coins[6];
	for(int i=0;i<6;i++)
		coins[i] = 0;

	for(int i=0;i<n;i++)
		coins[arr[i] - 1]++;

	int ans = 0;
	while(true)
	{
		int sum = 0;
		for(int i=0;i<6;i++)
			if (coins[i] > 0)
				coins[i]--, sum++;

		if (sum == 6)
			ans += 6 + 4;
		else if (sum == 5)
			ans += 5 + 2;
		else if (sum == 4)
			ans += 4 + 1;
		else if (sum > 0)
			ans += sum;
		else
			break;

	}

	return max(ans, n);
}

void solve()
{
	int players_n;
	cin >> players_n;

	int winner_score = maxPoints();
	int winner_index = 1;
	int winner_count = 1;

	for(int i=2;i<=players_n;i++)
	{
		int player_score = maxPoints();
		if (player_score == winner_score)
		{
			winner_count++;
		}
		else if(player_score > winner_score) {
			winner_index = i;
			winner_count = 1;
			winner_score = player_score;
		}
	}

	if (winner_count > 1)
		cout << "tie" << endl;
	else 
		if (winner_index == 1)
			cout << "chef" << endl;
		else
			cout << winner_index << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
		solve();
}