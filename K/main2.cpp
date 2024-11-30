// contest/K
#include <iostream>
#include <algorithm>

using namespace std;

int N;
char arr[1000000];
int ans = 1000000;

char circle[] = "RSP";

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	//R
	for (int a = 0 ; a < 3 ; ++a)
	{
		int now = a;
		int tmp_ans = 0;
		int last = 0;
		int last_ans = 0;
		for (int i = 0 ; i < N ; ++i)
		{
			if (arr[i] != circle[now])
				tmp_ans++;
			else
				now = (now + 1) % 3;

			if (arr[i] == circle[(a + 2) % 3])
			{
				last = i;
				last_ans = tmp_ans; 
			}
		}
		ans = min(ans, last_ans + (N - 1) - last);
	}

	cout << ans << "\n";
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
