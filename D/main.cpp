// contest//D
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;
using dd = pair<double, double>;


int N, R;
dd a;
dd b;
dd c;
dd d;
int ans = 0;

bool isIn()
{
	dd center;

	center.first = (a.first + b.first + c.first + d.first) / 4;
	center.second = (a.second + b.second + c.second + d.second) / 4;

	double dis = sqrt(pow(a.first - center.first, 2) + pow(a.second - center.second, 2));
	double ans_dis = sqrt(pow(center.first, 2) + pow(center.second, 2));

	if (ans_dis - dis <= R)
		return (true);
	return (false);
}

void Solve()
{
	cin >> N >> R;

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> a.first >> a.second;
		cin >> b.first >> b.second;
		cin >> c.first >> c.second;
		cin >> d.first >> d.second;


		if (isIn())
		{
			++ans;
		}
	}
	cout << ans;
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
