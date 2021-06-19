// https://www.codechef.com/JUNE21C/problems/BITTUP

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll fastpower(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = fastpower(x, y / 2)%mod;
    if (y % 2 == 0)
        return (temp * temp)%mod;
    else
        return (x * ((temp * temp)%mod))%mod;
}


int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll ans = fastpower(2,n)-1;
		ll fp = fastpower(ans,m)%mod;
		cout<<fp<<"\n";
	}
}
