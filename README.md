

#include <bits/stdc++.h>
 
typedef long long ll;
ll a,b;
void read(ll &x)
{
	x=0;ll f=1;char ch=getchar();
 	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
 	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
 	x*=f;
}
 
int main()
{
	read(a);
	(((!(a%4))&&(a%100))||(!(a%400)))?std::cout<<'Y':std::cout<<'N';
	return 0;
}



#include <bits/stdc++.h>
 
typedef long long ll;
ll a[5];
void read(ll &x)
{
	x=0;ll f=1;char ch=getchar();
 	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
 	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
 	x*=f;
}
 
int main()
{
	for(int i=1;i<=3;i++)read(a[i]);
	std::sort(a+1,a+4);
	for(int i=1;i<=3;i++)std::cout<<a[i]<<' ';
	return 0;
}


#include <bits/stdc++.h>
 
typedef long long ll;
ll a[7];
void read(ll &x)
{
	x=0;ll f=1;char ch=getchar();
 	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
 	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
 	x*=f;
}
 
int main()
{
	for(int i=1;i<=5;i++)read(a[i]);
	std::sort(a+1,a+6);
	std::cout<<a[1]<<' '<<a[5];
	return 0;
}


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
	a[5] = "Your are trying to Input info";
	a[6] = "Your are trying to Output info";
	a[7] = "our are trying to Make things ordered";
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
	a[7] = "our are trying to Make things ordered";
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
