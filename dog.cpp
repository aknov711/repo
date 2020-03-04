#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	

		ll n,m;
		cin>>n>>m;
		ll arr[n];
		set<ll>st;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			st.insert(x%m);
			
		}
		cout<<st.size()<<endl;
	
	return 0;
}
