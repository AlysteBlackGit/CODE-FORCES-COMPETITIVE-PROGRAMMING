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
#define vvll vector<vector<ll> >
#define vvi vector<vector<int> >
#define vpll vector<pair<ll,ll> >
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
inline bool is_sorted(vll a, ll x, ll y){
    if(x>y-1)
        return true;
    FOR(i,x,y){
        if(a[i]>a[i+1])
            return false;
    }
    return true;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif
    Test(){
        ll n,k;
        cin>>n>>k;
        vpll a;
        FOR(i,0,n){
            ll x;
            cin>>x;
            a.pb(mp(x,i+1));
        }
        sort(all(a));
        ll count=0;
        FOR(i,0,n-1){
            if(a[i+1].second!=a[i].second+1)
                ++count;
            // if(i==n-2&&a[i].second+1!=a[i+1].second)
            //     ++count;
        }
        if(count<k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;   
    }
}