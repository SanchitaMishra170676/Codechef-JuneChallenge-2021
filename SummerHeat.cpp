//  https://www.codechef.com/JUNE21C/problems/COCONUT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	cin>>t;
	while(t--){
	    int a,b,A,B;
	    cin>>a>>b>>A>>B;
	    if(a==0){
	        cout<<B/b<<"\n";
	        continue;
	    }
	    else if (b==0){
	        cout<<A/a<<"\n";
	        continue;
	    }
	    cout<<(A/a)+(B/b)<<"\n";
	}
}
