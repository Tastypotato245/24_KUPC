// contest//C
#include <iostream>
#include <algorithm>

using namespace std;

int N, K;

void Solve()
{
	cin >> N >> K;

	if (N == 2 && K == 1)
	{
		cout << "1 2";
		return ;
	}
	if (N != 1)
	{
		cout << "-1";
		return ;
	}
	for (int i = 0 ; i < K ; ++i)
		cout << "1 ";
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
