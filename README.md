# homework-
none

https://paste.ubuntu.com/p/HrWh36Hgd5/
https://paste.ubuntu.com/p/M2DHH8gtFC/
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
