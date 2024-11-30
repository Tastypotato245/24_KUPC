// contest/A
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
int A, B, C, D;
string s;

void Solve()
{
	cin >> N;
	cin >> A >> B >> C >> D;
	cin >> s;

	for (int i = 0 ; i < s.size() ; ++i)
	{
		if (s[i] == 'a')
			--A;
		if (s[i] == 'b')
			--B;
		if (s[i] == 'c')
			--C;
		if (s[i] == 'd')
			--D;

		if (i > 0 && s[i] == s[i - 1])
		{
			cout << "No";
			return ;
		}
		if (A < 0 || B < 0 || C < 0 || D < 0)
		{
			cout << "No";
			return ;
		}
	}
	if (s[0] != 'a' || s[N - 1] != s[0])
	{
		cout << "No";
		return ;
	}
	cout << "Yes";
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
