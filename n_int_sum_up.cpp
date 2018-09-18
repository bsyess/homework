#include <bits/stdc++.h>
using namespace std;

int t,n,sum;
int main()
{
	cin >> n;
	while(n--)
	{
		cin >> t;
		sum += t;
	}
	cout << sum << endl;
	return 0;
}
