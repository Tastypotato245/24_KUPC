// contest
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[100001];
int b[100001];
void Solve()
{
	int n, l, r;
	scanf("%d%d%d", &n, &l, &r);

	for(int i = 0 ; i < n ; i++) scanf("%d", a + i);

	sort(a + l - 1, a + r);

	for(int i = 0 ; i < n ; i++) b[i] = a[i];

	sort(a, a + n);
	for(int i = 0 ; i < n ; i++){
		if(a[i] != b[i]){
			printf("0");
			return;
		}
	}
	printf("1");
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
