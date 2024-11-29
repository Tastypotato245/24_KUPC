#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string s;

bool big(const string& s1, const string& s2, int interval)
{
	for (int i = 0 ; i < interval ; ++i)
	{
		if (s1[i] > s2[i])
			return (true);
		if (s1[i] < s2[i])
			return (false);
	}
	return (false);
}

int N, T;
int main(void)
{
	cin >> N >> T;
	cin >> s;

	int interval = pow(2, N - T);
	string max = s.substr(0, interval);

	for (int i = interval ; i < s.size() ; i += interval)
	{
		string new_num = s.substr(i, interval);
		if (big(new_num, max, interval))
			max = new_num;
	}
	bool start = false;
	for (int i = 0 ; i < interval ; ++i)
	{
		if (max[i] != '0')
			start = true;
		if (i == interval - 1)
			cout << max[i];
		else if (start)
			cout << max[i];
	}
	cout << "\n";
	return (0);
}

