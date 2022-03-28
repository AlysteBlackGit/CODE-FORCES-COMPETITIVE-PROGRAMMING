#include <bits/stdc++.h>
using namespace std;
#define faster()                      \
ios_base::sync_with_stdio(false); \
cin.tie(0)
#define ll long long
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define FORI(i, a) for (vector<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define FORR(i, a, b) for (vector<ll>::iterator i = a; i <= b; ++i)
#define FORS(i, a, b) for(set<vector<ll>>::iterator i=a;i<=b;++i)
#define FORD(i,a,b,d) for(ll i=a;i<b;i+=d)
#define all(a) a.begin	(), a.end()
#define vll vector<ll>
#define vi vector<int>
#define vvll vector<vector<ll>>
#define vvi vector<vector<int>>
#define vpll vector<pair<ll,ll>>
#define vpii vector<pair<int,int>>
#define vs vector<string>
#define sll set<ll>
#define msll multiset<ll>
#define svll set<vector<ll>>
#define svi set<vector<int>>
#define Test() \
ll t;      \
cin >> t;  \
while (t--)
#define pb push_back
#define po pop_back
#define rs resize
#define ins insert
#define del erase
#define mp make_pair
#define db double
#define llu unsigned long long
inline bool compare(ll a, ll b){
return a>b;
}
const ll m = 998244353;
inline bool cp(pair<ll,ll> a, pair<ll,ll> b){
return a.second<b.second;
}
inline ll lcm(ll a,ll b){
	ll gcd=__gcd(a,b);
	return (a*b)/gcd;
}
template <class spe, class spe2>
spe2 sum(spe  &a, spe2  &b){
return a+b;
}
int main(){ 
	faster();
	#ifndef ONLINE_JUDGE
		freopen("input_II.txt","r",stdin);
		freopen("output_II.txt","w",stdout);
	#endif
	Test(){
		ll n;
		cin>>n;
		vll a;
		vll b;
		FOR(i,0,n){
			ll x;
			cin>>x;
			if (i!=0 &&x<b[b.size()-1])
				b.pb(x);
			else{
				if (i==0)
					b.pb(x);
				else	
					a.pb(x);
			}
		}
		for(ll i=b.size()-1;i>=0;--i)
			cout<<b[i]<<" ";
		FOR(i,0,a.size())
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
