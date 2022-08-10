#include<bits/stdc++.h>
using namespace std;
int main()
{
    /***
    index: 0 1 2 3 4
    value: 2 4 1 5 10
   prefix: 2 6 7 12 22 (sum of values)
   Q:
   range: l r
           l to r= prefix[r]-prefix[l-1];
           if (l==0) ans= prefix[r];
   */

   int n;
   cin>>n;
   int a[n+1];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int pre[n+1];
   pre[0]=a[0];
   for(int i=1;i<n;i++)
   {
       pre[i]=pre[i-1]+a[i];
   }
   int q;
   cin>>q;
   while(q--)
   {
       int l, r;
       cin>>l>>r;
       if(l==0) cout<<pre[r]<<endl;
       else cout<<pre[r]-pre[l-1]<<endl;
   }
}
