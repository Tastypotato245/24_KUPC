// contest//K
#include <iostream>
#include <algorithm>

using namespace std;

int N;
char arr[100000];
char rsp[3] = {'R', 'S', 'P'};

int ans = 1000000;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	for (int i = 0 ; i < 3 ; ++i)
	{
		int now = i;
		int trash = 0;
		int cur_ans = 0;
		int cur_idx = 0;
		for (int j = 0 ; j < N ; ++j)
		{
			if (rsp[now] != arr[j])
				++trash;
			else if (rsp[now] == arr[j])
			{
				now = (now + 1) % 3;
				if (arr[j] == rsp[(i + 2) % 3])
				{
					cur_ans = trash;
					cur_idx = j;
				}
			}
		}
		ans = min(ans, cur_ans + ((N - 1) - cur_idx));
	}
	cout << ans;
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
