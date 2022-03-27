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
const ll m = 1e9 + 7;
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
		string a,b;
		cin>>a>>b;
		ll n=__gcd(a.length(),b.length());
		string s,l;
		if(a.length()>b.length()){
			l=a;
			s=b;
		}
		else{
			l=b;
			s=a;
		}
		bool check=true;
		FOR(i,0,l.length()){
			if (l[i]!=s[i%n]){
				check=false;
				cout<<"-1"<<endl;
				break;
			}
		}	
		if(check){
			if (s.length()>n){
				FOR(i,0,s.length()-n)
					if (s[i]!=s[i+n]){
						cout<<"-1"<<endl;
						check=false;
						break;
					}
			}
		}
		if(check){
			ll m,x;
			m=l.length()/n;
			x=s.length()/n;
			ll k=lcm(m,x);
			FOR(i,0,k*n)
				cout<<s[i%n];
			cout<<endl;
		}
	}
}
