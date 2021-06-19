// https://www.codechef.com/JUNE21C/problems/SHROUTE

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ll sol[n];
	    ll l=-1,r=-1, left=0,right=0;
	    for (ll i=0;i<n;i++){
	        if(arr[i] == 1){
	            sol[i] =0;
	            l=i;
	        }
	        else if(arr[i] == 2)
	        {
	            sol[i]=0;
	        }
	        else{
	            if(r <= i){
	                for(ll j=i;j<n;j++){
	                    if(arr[j] == 2){
	                        r=j;
	                        break;
	                    }
	                }
	            }
	            if(r <= i){
	                r=10000007;
	            }
	            if(l==-1 && r == 10000007){
	                sol[i] =-1;
	                continue;
	            }
	            if(l==-1 && r!= 10000007 ){
	                sol[i] = r-i;
	                continue; 
	            }
	            left = i-l;
	            right = r-i;
	            sol[i] = min(left,right);
	            
	        }
	    }
	    
	    sol[0]=0;
	    while(m--){
	        ll p;
	        cin>>p;
	        cout<<sol[p-1]<<" ";
	    }
	    cout<<"\n";
	}
}
