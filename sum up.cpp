#include <bits/stdc++.h>
using namespace std;

struct data
{
	int id;
	double sum,x,y,z;
}t[5];

int main()
{
		for(int i = 1;i <= 3;i++)
		{
			cin >> t[i].id >> t[i].x >> t[i].y >> t[i].z;
			t[i].sum = t[i].x + t[i].y + t[i].z;
		}
		for(int i = 1;i <= 3;i++)
			cout << t[i].id << ' ' << t[i].x << ' ' << t[i].y << ' ' << t[i].z << ' ' << t[i].sum << endl;
	return 0;	
} 
