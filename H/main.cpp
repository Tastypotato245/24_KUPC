// contest/H
#include <iostream>
#include <algorithm>

using namespace std;

int M;
int a[100001];
int b[100001];
void Solve()
{
	cin >> M;
	for (int i = 1 ; i <= M ; ++i)
		cin >> a[i];
	for (int i = 1 ; i <= M ; ++i)
		cin >> b[i];

	for (int i = 1 ; i <= M ; ++i)
	{
		int sub_ans = 1000000000;
		if (a[i] == 1 && b[i] != 0)
		{
			cout << 1 << " ";
			continue ;
		}
		else if (a[i] >= b[i])
		{
			cout << b[i] << " ";
			continue ;
		}
		else
		{
			// binary
			int l = 1, r = b[i];
			sub_ans = 1000000000;
			while (l <= r)
			{
				int mid = (l + r) / 2;
				int can = mid;
				int tmp = can;
				int sub = 0;
				while (can >= a[i])
				{
					sub = can / a[i];
					can += sub;
					tmp += sub;
					can -= sub * a[i];
				}
				if (tmp >= b[i])
					sub_ans = min(sub_ans, mid);
				if (tmp < b[i])
					l = mid + 1;
				else if (tmp > b[i])
					r = mid - 1;
				else
					break ;
			}
			cout << sub_ans << " ";
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
