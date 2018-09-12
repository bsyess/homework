#include <bits/stdc++.h>
using namespace std;

double x,y,z;
string a[10];
char c;
struct data
{
	int id;
	double sum,ave;
}t[5];

bool cmp(data x1,data x2)
{
	return x1.sum < x2.sum;
}

int main()
{
	a[1] = "1.Input\n";
	a[2] = "2.Output\n";
	a[3] = "3.Order\n";
	a[4] = "4.Quit\n"; 
	a[5] = "Please input info of the three students:";
	a[7] = "You are trying to Make things ordered";
	a[8] = "You are about to Quit";
	a[9] = "Wrong input";
	
	for(int i = 1;i <= 4;++i)
	{
		int x=30;
		while(x--)cout << ' ';
		cout << a[i];
	}
	cin >> c;
	switch(c)
	{
		case 'i' : cout << a[5];break;
		case 'm' : cout << a[7];break;
		case 'q' : cout << a[8];break;
		default : cout << a[9];
	}
	if(c == 'i')
	{
		for(int i = 1;i <= 3;i++)
		{
			cin >> t[i].id >> x >> y >>z;
			t[i].sum = x + y + z;
			t[i].ave = t[i].sum / 3.0;
		}
		sort(t+1,t+4,cmp);
		for(int i = 1;i <= 3;i++)
			printf("%d,%.1lf,%.1lf\n",t[i].id,t[i].sum,t[i].ave);
	}
	return 0;	
} 
