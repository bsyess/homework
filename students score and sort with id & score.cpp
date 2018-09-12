#include <bits/stdc++.h>
using namespace std;

struct data
{
	int num,id;
	double a,b,c,sum;
}t[5];

bool cmp(data x1,data x2)
{
	if(x1.id == x2.id) return x1.sum < x2.sum;
	else return x1.id > x2.id;
}

int main()
{
	for(int i = 1;i <= 3;++i) 
	{
		cin >> t[i].num >> t[i].id >> t[i].a >> t[i].b >> t[i].c;
		t[i].sum = t[i].a + t[i].b + t[i].c;
	}
	sort(t+1,t+4,cmp);
	for(int i = 1;i <= 3;++i) 
	{
		if(t[i].id != t[i-1].id) cout << t[i].id <<' ';
		cout << t[i].num << ' ' << t[i].sum;
		if(t[i].id != t[i+1].id) cout << endl;
		else cout << ' ';
	}
	return 0;	
} 
