// contest/I
#include <iostream>
#include <algorithm>

using namespace std;
#define MOD 1000000007

long long N, M;
long long arr[1000000];

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < M ; ++i)
		cin >> arr[i];
	sort(arr, arr + M);

	long long f = arr[M - 1];
	long long s = arr[M - 2];
	long long temp = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		temp = f + s;
		if (s >= temp)
			continue ;
		else
		{
			if (f >= 0 && s < 0)
				s = temp % MOD;
			else
			{
				s = f;
				f = temp % MOD;
			}
		}
	}
	if (temp < 0)
		cout << temp + MOD << "\n";
	else
		cout << temp % MOD << "\n";
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
