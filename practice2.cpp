#include<bits/stdc++.h>
using namespace std;

// Rohan Kumar
// 2212174
#define ll long long 

int main(){
    ll t;
    cin>>t;

    
    while(t--){
        ll n,m;
        cin>>n>>m;


        m--;
        ll a[n],b[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];

        ll ans=1e18,s=0;
        for(ll i=n-1;i>=0;i--){
            if(i<=m) ans=min(ans,s+a[i]);
            s+=min(a[i],b[i]);
        }
        cout<<ans<<endl;

        
    }
    return 0;

}

