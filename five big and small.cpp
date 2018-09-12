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
