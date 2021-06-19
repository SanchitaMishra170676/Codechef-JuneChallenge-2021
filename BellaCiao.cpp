// https://www.codechef.com/JUNE21C/problems/CHFHEIST

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ll t;
	cin>>t;
	while(t--){
	    ll D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    ll n = D/d;
	    ll rem = D%d;
	    ll sum =0;
	    ll itm = (n*(n-1))/2;
	    sum= ((n*P)+(itm*Q))*d;
	    sum += (P+(n*Q))*rem;
	    cout<<sum<<"\n";
	}
	
}
