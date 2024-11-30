// contest//J
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, M;
vector<int> v[100001];

void Solve()
{
	cin >> N >> M;

	for (int i = 1 ; i <= M ; ++i)
	{
		int s, d;
		cin >> s >> d;
		v[s].push_back(d);
		v[d].push_back(s);
	}

	for (int i = 0 ; i <= N ; ++i)
		sort(v[i].begin(), v[i].end());

	string ans = "";
	bool bro = false;
	for (int i = 2 ; i <= N && !bro ; ++i)
	{
		bool once = false;
		int cnt = 0;
		for (int j = 0; j < v[i].size() ; ++j)
		{
			if (i < v[i][j])
			{
				break ;
			}
			once = true;
			++cnt;
		}
		if (once && cnt == i - 1)
			ans += "E";
		else if (!once)
			ans += "N";
		else if (once && cnt != i - 1)
			bro = true;
	}
	if (bro)
		cout << "-1";
	else
		cout << ans;
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
