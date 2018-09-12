#include <bits/stdc++.h>
using namespace std;

string a[10];
char c;

int main()
{
	a[1] = "1.Input\n";
	a[2] = "2.Output\n";
	a[3] = "3.Order\n";
	a[4] = "4.Quit\n"; 
	a[5] = "You are trying to Input info";
	a[6] = "You are trying to Output info";
	a[7] = "You are trying to Make things ordered";
	a[8] = "You are about to Quit";
	a[9] = "Wrong Input";
	
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
		case 'o' : cout << a[6];break;
		case 'm' : cout << a[7];break;
		case 'q' : cout << a[8];break;
		default : cout << a[9];
	}
	return 0;	
} 
