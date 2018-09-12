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
