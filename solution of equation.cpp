#include <bits/stdc++.h>
using namespace std;

double a,b,c,e,d1,d2,d;

int main()
{
	cin >> a >> b >> c; 
	e = b*b - 4*a*c;
	if(e < 0) cout << "no root";
	else if(e == 0) 
	{
		d = (0-b) / (2.0*a);
		if(d * 1e6 > (int) d * 1e6) cout << setprecision(6) << d;
		else cout<<d;
	}
	else
	{
		d1 = (sqrt(e) - b) / (2.0*a);
		d2 = ((0-b) - sqrt(e)) / (2.0*a);
		if(d2 * 1e6 > (int) d2 * 1e6) cout << setprecision(6) << d2<<' ';
		else cout << d2 << ' ';
		if(d1 * 1e6 > (int) d1 * 1e6) cout << setprecision(6) << d1<<' ';
		else cout << d1;
	}
	return 0;	
} 
