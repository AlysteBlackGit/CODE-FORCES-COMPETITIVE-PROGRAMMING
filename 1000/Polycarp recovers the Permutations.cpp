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
inline bool cp1_decrease(pair<ll,ll> a, pair<ll,ll> b){
return a.first>b.first;
}
inline bool cp2_increase(pair<ll,ll> a, pair<ll,ll> b){
return a.second<b.second;
}
inline bool cp2_decrease(pair<ll,ll> a, pair<ll,ll> b){
return a.second>b.second;
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
		FOR(i,0,n){
			ll x;
			cin>>x;
			a.pb(x);
		}
		if(a[0]!=n&&a[n-1]!=n){
			cout<<-1<<endl;
		}
		else{
			ll i;
			if(a[0]==n){
				for(ll i=n-1;i>0;--i)
					cout<<a[i]<<" ";
				cout<<a[0];	
			}
			else{
				cout<<a[n-1]<<" ";
				for(ll i=n-2;i>=0;--i)
					cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}