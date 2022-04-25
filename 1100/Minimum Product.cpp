// #include <bits/stdc++.h>
// using namespace std;
// #define faster()                      \
// 	ios_base::sync_with_stdio(false); \
// 	cin.tie(0)
// #define ll long long
// #define f first
// #define s second
// #define FOR(i, a, b) for (ll i = a; i < b; ++i)
// #define FORI(i, a) for (vector<ll>::iterator i = a.begin(); i != a.end(); ++i)
// #define FORR(i, a, b) for (vector<ll>::iterator i = a; i <= b; ++i)
// #define FORS(i, a, b) for (set<vector<ll>>::iterator i = a; i <= b; ++i)
// #define FORD(i, a, b, d) for (ll i = a; i < b; i += d)
// #define all(a) a.begin(), a.end()
// #define vll vector<ll>
// #define vi vector<int>
// #define vc vector<char>
// #define vvll vector<vector<ll>>
// #define vvi vector<vector<int>>
// #define vpll vector<pair<ll, ll>>
// #define vpii vector<pair<int, int>>
// #define vs vector<string>
// #define sll set<ll>
// #define msll multiset<ll>
// #define svll set<vector<ll>>
// #define svi set<vector<int>>
// #define Test() \
// 	ll t;      \
// 	cin >> t;  \
// 	while (t--)
// #define pb push_back
// #define po pop_back
// #define rs resize
// #define ins insert
// #define del erase
// #define mp make_pair
// #define db double
// #define llu unsigned long long
// inline bool compare(ll a, ll b)
// {
// 	return a > b;
// }
// const ll m = 1e9 + 7;
// inline bool cp1_decrease(pair<ll, ll> a, pair<ll, ll> b)
// {
// 	return a.first > b.first;
// }
// inline bool cp2_increase(pair<ll, ll> a, pair<ll, ll> b)
// {
// 	return a.second < b.second;
// }
// inline bool cp2_decrease(pair<ll, ll> a, pair<ll, ll> b)
// {
// 	return a.second > b.second;
// }
// inline void swap_xor(ll &a, ll &b)
// {
// 	a ^= b;
// 	b ^= a;
// 	a ^= b;
// }
// inline void split_string(string a, vector<string> &res)
// {
// 	stringstream ss;
// 	ss << a;
// 	string temp;
// 	while (ss >> temp)
// 	{
// 		res.pb(temp);
// 		temp = "";
// 	}
// }
// inline ll mex(vll a)
// {
// 	sort(all(a));
// 	FOR(i, 0, a.size())
// 	if (a[i] != i)
// 		return i;
// 	return a[a.size() - 1] + 1;
// }
// inline bool prime(ll a)
// {
// 	if(a<2) return false;
// 	if(a==2 || a==3) return true;
// 	for(ll i=2;i<=sqrt(a);++i)
// 		if(a%i==0) return false;
// 	return true;
// }
// template <class spe, class spe2>
// spe2 sum(spe &a, spe2 &b)
// {
// 	return a + b;
// }
// template <class T1>
// void swap_value(T1 &a, T1 &b)
// {
// 	T1 temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }
// int main()
// {
// 	faster();
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif	
// 	vll a(100000,1);
// 	a[0]=a[1]=0;
// 	a[2]=1;
// 	FOR(i,2,sqrt(100000)+1)
// 	for(ll j=i*i;j<=100000;j+=i)
// 		a[j]=0;
// 	vll f(1000,0);
// 	f[0]=0;
// 	f[1]=1;
// 	FOR(i,2,1001)
// 	 	f[i]=f[i-1]+f[i-2];
// 	Test(){
// 		ll n;
// 		cin>>n;
// 		while(n%2==0){
// 			cout<<2<<" ";
// 			n/=2;
// 		}
// 		for(ll i=3;i<=sqrt(n);i+=2){
// 			while(n%i==0){
// 				cout<<i<<" ";
// 				n/=i;
// 			}
// 		}
// 		if(a[n]) cout<<n;
// 		cout<<endl;
// 	}
// }
			// CPP0130
		

			// CPP0154
// #include <bits/stdc++.h>
// using namespace std;
// #define faster()                      \
// ios_base::sync_with_stdio(false); \
// cin.tie(0)
// #define ll long long
// #define f first
// #define s second
// #define FOR(i, a, b) for (ll i = a; i < b; ++i)
// #define FORI(i, a) for (vector<ll>::iterator i = a.begin(); i != a.end(); ++i)
// #define FORR(i, a, b) for (vector<ll>::iterator i = a; i <= b; ++i)
// #define FORS(i, a, b) for(set<vector<ll>>::iterator i=a;i<=b;++i)
// #define FORD(i,a,b,d) for(ll i=a;i<b;i+=d)
// #define all(a) a.begin(), a.end()
// #define vll vector<ll>
// #define vi vector<int>
// #define vc vector<char>
// #define vvll vector<vector<ll>>
// #define vvi vector<vector<int>>
// #define vpll vector<pair<ll,ll>>
// #define vpii vector<pair<int,int>>
// #define vs vector<string>
// #define sll set<ll>
// #define msll multiset<ll>
// #define svll set<vector<ll>>
// #define svi set<vector<int>>
// #define Test() \
// ll t;      \
// cin >> t;  \
// while (t--)
// #define pb push_back
// #define po pop_back
// #define rs resize
// #define ins insert
// #define del erase
// #define mp make_pair
// #define db double
// #define llu unsigned long long
// inline bool compare(ll a, ll b){
// return a>b;
// }
// const ll m = 1e9 + 7;
// inline bool cp1_decrease(pair<ll,ll> a, pair<ll,ll> b){
// return a.first>b.first;
// }
// inline bool cp2_increase(pair<ll,ll> a, pair<ll,ll> b){
// return a.second<b.second;
// }
// inline bool cp2_decrease(pair<ll,ll> a, pair<ll,ll> b){
// return a.second>b.second;
// }
// inline void swap_xor(ll &a, ll &b){
// a^=b;
// b^=a;
// a^=b;
// }
// inline void split_string(string a, vector<string> &res){
// stringstream ss;
// ss<<a;
// string temp;
// while(ss>>temp){
// res.pb(temp);
// temp="";
// }
// }
// inline ll mex(vll a){
// sort(all(a));
// FOR(i,0,a.size())
// if(a[i]!=i) return i;
// return a[a.size()-1]+1;
// }
// inline bool prime(ll a)
// {
// 	if(a<2) return false;
// 	if(a==2 || a==3) return true;
// 	for(ll i=2;i<=sqrt(a);++i)
// 		if(a%i==0) return false;
// 	return true;
// }
// template <class spe, class spe2>
// spe2 sum(spe  &a, spe2  &b){
// return a+b;
// }
// template <class T1>
// void swap_value(T1 &a, T1 &b){
// T1 temp;
// temp=a;
// a=b;
// b=temp;
// }
// int main(){
// 	faster();
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// 	#endif
// 	ll n,k;
// 	cin>>n>>k;
// 	ll s=0;
// 	FOR(i,1,n+1)
// 		s+=i%k;
// 	(s==k)?(cout<<1<<endl):(cout<<0<<endl);
// }

				// CPP0201
// #include <bits/stdc++.h>
// using namespace std;
// #define faster()                      \
// ios_base::sync_with_stdio(false); \
// cin.tie(0)
// #define ll long long
// #define f first
// #define s second
// #define FOR(i, a, b) for (ll i = a; i < b; ++i)
// #define FORI(i, a) for (vector<ll>::iterator i = a.begin(); i != a.end(); ++i)
// #define FORR(i, a, b) for (vector<ll>::iterator i = a; i <= b; ++i)
// #define FORS(i, a, b) for(set<vector<ll>>::iterator i=a;i<=b;++i)
// #define FORD(i,a,b,d) for(ll i=a;i<b;i+=d)
// #define all(a) a.begin(), a.end()
// #define vll vector<ll>
// #define vi vector<int>
// #define vc vector<char>
// #define vvll vector<vector<ll>>
// #define vvi vector<vector<int>>
// #define vpll vector<pair<ll,ll>>
// #define vpii vector<pair<int,int>>
// #define vs vector<string>
// #define sll set<ll>
// #define msll multiset<ll>
// #define svll set<vector<ll>>
// #define svi set<vector<int>>
// #define Test() \
// ll t;      \
// cin >> t;  \
// while (t--)
// #define pb push_back
// #define po pop_back
// #define rs resize
// #define ins insert
// #define del erase
// #define mp make_pair
// #define db double
// #define llu unsigned long long
// inline bool compare(ll a, ll b){
// return a>b;
// }
// const ll m = 1e9 + 7;
// inline bool cp1_decrease(pair<ll,ll> a, pair<ll,ll> b){
// return a.first>b.first;
// }
// inline bool cp2_increase(pair<ll,ll> a, pair<ll,ll> b){
// return a.second<b.second;
// }
// inline bool cp2_decrease(pair<ll,ll> a, pair<ll,ll> b){
// return a.second>b.second;
// }
// inline void swap_xor(ll &a, ll &b){
// a^=b;
// b^=a;
// a^=b;
// }
// inline void split_string(string a, vector<string> &res){
// stringstream ss;
// ss<<a;
// string temp;
// while(ss>>temp){
// res.pb(temp);
// temp="";
// }
// }
// inline ll mex(vll a){
// sort(all(a));
// FOR(i,0,a.size())
// if(a[i]!=i) return i;
// return a[a.size()-1]+1;
// }
// inline bool prime(ll a)
// {
// 	if(a<2) return false;
// 	if(a==2 || a==3) return true;
// 	for(ll i=2;i<=sqrt(a);++i)
// 		if(a%i==0) return false;
// 	return true;
// }
// template <class spe, class spe2>
// spe2 sum(spe  &a, spe2  &b){
// return a+b;
// }
// template <class T1>
// void swap_value(T1 &a, T1 &b){
// T1 temp;
// temp=a;
// a=b;
// b=temp;
// }
// int main(){
// 	faster();
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// 	#endif
// 	Test(){
// 		ll n;
// 		cin>>n;
// 		vll a(n);
// 		FOR(i,0,n) 
// 			cin>>a[i];
// 		sort(all(a));
// 		ll min=LONG_LONG_MAX;
// 		FOR(i,1,n){
// 			if(a[i]-a[i-1]==0){
// 				min=0;
// 				break;
// 			}
// 			else if(a[i]-a[i-1]<min)
// 				min=a[i]-a[i-1];
// 		}
// 		cout<<min<<endl;
// 	}
// }
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
if(a[i]!=i) return i;
return a[a.size()-1]+1;
}
inline bool prime(ll a)
{
	if(a<2) return false;
	if(a==2 || a==3) return true;
	for(ll i=2;i<=sqrt(a);++i)
		if(a%i==0) return false;
	return true;
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
   // Your code goes here 
   // Created by BlackAllyste
	Test(){
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		ll r1=max(x,a-n)*b;
		ll r2=max(y,b-n)*a;
		ll res=min(r1,r2);
		if(a-x<n){
			ll r3=x,r4;
			if(b-y<n-(a-x)) r4=y;
			else r4=b-(n-(a-x));
			res=min(res,r3*r4);
		}
		if(b-y<n){
			ll r3=y,r4;
			if(a-x<n-(b-y)) r4=x;
			else r4=a-(n-(b-y));
			res=min(res,r3*r4);
		}
		cout<<res<<endl;
	}
}