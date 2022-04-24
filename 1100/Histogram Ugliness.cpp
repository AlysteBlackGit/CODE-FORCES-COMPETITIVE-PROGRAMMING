#include <bits/stdc++.h>
using namespace std;
#define faster()                      \
ios_base::sync_with_stdio(false); \
cin.tie(0)
#define ll long long
#define f first
#define s second
#define FOR(i, a, b) for (ll i = a; i < b; ++i)
#define FORI(i, a) for (vector<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define FORR(i, a, b) for (vector<ll>::iterator i = a; i <= b; ++i)
#define FORS(i, a, b) for(set<vector<ll>>::iterator i=a;i<=b;++i)
#define FORD(i,a,b,d) for(ll i=a;i<b;i+=d)
#define all(a) a.begin(), a.end()
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
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
inline void split_string(string a, vector<string> &res){
stringstream ss;
ss<<a;
string temp;
while(ss>>temp){
res.pb(temp);
temp="";
}
}
inline ll mex(vll a){
sort(all(a));
FOR(i,0,a.size())
if(i!=a[i]) return i;
return a[a.size()-1]+1;
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
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Test(){
		ll n;
		cin>>n;

		vll a(n);
		FOR(i,0,n){
			cin>>a[i];
		}
		if(n==1) cout<<a[0]<<endl;
		else{
			ll k=0,s=0;
			if(a[0]>a[1]){
				k+=a[0]-a[1];
				a[0]=a[1];
			}
			FOR(i,1,n){
				if(a[i]>a[i-1]&&a[i]>a[i+1]){
					k+=a[i]-max(a[i-1],a[i+1]);;
					a[i]=max(a[i-1],a[i+1]);
				}
			}
			if(a[n-1]>a[n-2]){
				k+=a[n-1]-a[n-2];
				a[n-1]=a[n-2];
			}
			s+=a[0]+a[n-1]+k;
			FOR(i,1,n)
				s+=abs(a[i]-a[i-1]);
			cout<<s<<endl;
		}
	}
}