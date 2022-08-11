/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    ll c=0, ans=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0) c=1;
    }
    ll mx=1e18;
    if(c==1)cout<<"0"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ans<=1000000000000000000/a[i])
            {
                ans=ans*a[i];
            }
            else {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    bye;
}

