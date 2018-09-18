#include <bits/stdc++.h>
using namespace std;

int x,y,c,d;
int gcd(int a,int b)
{
	if(a < b)swap(a,b);
	while(b)
	{
		d = b;
		b = a % b;
		a = d;
	}
	return a;
}
int main()
{
	cin >> x >> y;
	c = gcd(x,y);
	cout << c << ' ' << x * y / c <<endl;
	return 0;
}
