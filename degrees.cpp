#include <bits/stdc++.h>
using namespace std;

double x,y,z;;
int main()
{
	cin >> x >> y >> z;
	cout << x <<" degrees, " << y << " minutes, " << z << " seconds = ";
	x += (y / 60) + (z / 3600);
	cout << x << " degrees\n";

	return 0;
}
