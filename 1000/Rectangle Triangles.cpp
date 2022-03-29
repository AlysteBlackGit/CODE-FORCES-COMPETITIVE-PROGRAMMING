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
#define all(a) a.begin(), a.end()
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
inline void swap_xor(ll &a, ll &b){
a^=b;
b^=a;
a^=b;
}
inline ll lcm(ll a, ll b){
	return (a*b)/__gcd(a,b);
}
inline void split_string(string a, vector<string> &res){
stringstream ss;
ss<<a;
string temp;
while(ss>>temp){
res.pb(temp);
temp="";
}
}
template <class spe, class spe2>
spe2 sum(spe  &a, spe2  &b){
return a+b;
}
template <class T1>
void swap_value(T1 &a, T1 &b){
T1 temp;
temp=a;
a=b;
b=temp;
}
vll prime(100005, 1);
int main(){
	faster();
	#ifndef ONLINE_JUDGE
		freopen("input_II.txt","r",stdin);
		freopen("output_II.txt","w",stdout);
	#endif
	Test(){
		ll x,y,temp;
		cin>>x>>y;
		ll t,b,l,r;
		cin>>b;
		vll tp,bp,lp,rp;
		FOR(i,0,b){
			cin>>temp;
			bp.pb(temp);
		}
		cin>>t;
		FOR(i,0,t){
			cin>>temp;
			tp.pb(temp);
		}
		cin>>l;
		FOR(i,0,l){
			cin>>temp;
			lp.pb(temp);
		}
		cin>>r;
		FOR(i,0,r){
			cin>>temp;
			rp.pb(temp);
		}
		vll res;
		res.pb((tp[tp.size()-1]-tp[0])*y);
		res.pb((bp[bp.size()-1]-bp[0])*y);
		res.pb((lp[lp.size()-1]-lp[0])*x);
		res.pb((rp[rp.size()-1]-rp[0])*x);
		sort(all(res));
		cout<<res[res.size()-1]<<endl;
	}	
}