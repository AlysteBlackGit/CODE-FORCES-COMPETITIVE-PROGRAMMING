#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define Test() ll t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    faster();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    Test(){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        ll i=0;
        ll b[n+5];
        FOR(i,0,n)
            b[i]=1;
        ll count=0;
        FOR(i,0,n){
            if(a[i]==')'&&b[i])
                ++count;    
            if(a[i]=='('){
                for(ll j=i+1;j<n;++j)
                    if(a[j]==')'&&b[j]){
                        b[j]=0;
                        break;
                    }
            }
        }
        cout<<count<<endl;
    }
}