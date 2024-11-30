// contest//E
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<int> v[501];

int tdp[501];

void ()
{

}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N - 1 ; ++i)
	{
		int s, d;
		cin >> s >> d;
		v[s].push_back(d);
		v[d].push_back(s);
	}


}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
