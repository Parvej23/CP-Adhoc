/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define Fon(i,a,b) for(int i=1;i<=n;i++)
#define fon(i,n) for(int i=0;i<n;i++)
#define lcm(a,b) (a/__gcd(a,b)*b)
#define gcd(a,b)  __gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define bye return 0
#define FASTER_CODE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    FASTER_CODE;
    ll n;
    cin>>n;
    ll a[n+1];
    ll pre[n+1];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll q;
    cin>>q;
    pre[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    while(q--)
    {
        ll l, r;
        cin>>l>>r;
        if(l==0) cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }

    bye;
}

