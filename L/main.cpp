// contest/L
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int N, M;
int ans = 0;

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
	{
		int a, b;
		cin >> a >> b;
	}

	for (int i = 0 ; i < M ; ++i)
	{
		int a, b;
		cin >> a >> b;
		ans += b;
	}
	printf("%.5f", (float)ans / (float)N);
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
