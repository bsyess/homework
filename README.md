# homework-

https://paste.ubuntu.com/p/9JRSFPcRRz/
https://paste.ubuntu.com/p/Kjp5WPM8S3/
https://paste.ubuntu.com/p/4RXJbHFbft/
https://paste.ubuntu.com/p/gWP8kjf3Bg/
https://paste.ubuntu.com/p/dYXFkZVVrN/


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

