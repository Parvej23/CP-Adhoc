#include<bits/stdc++.h>
using namespace std;
int main()
{
    /***
    n=7;
    index: 0 1 2 3 4 5 6
    array:2 3 4 5 6 7 8
    query: 3
           l r v
           case 1: 0 3 2
           array:  4 5 6 7 6 7 8 ans
           dif[n+1]={0}
            dif[]={2,0,0,0,0-2, 0,0,0};
            query=3
            {
               case 1: 0 3 2
               dif[l]+=v;
               dif[r+1]-=v;
            }
             dif[]={2,1,0,0,1,0,-1,-3};
             pre[]={2,3,3,3,4,4,3,0};
             arr=  {2,3,4,5,6,7,8};
             ans=  {4,6,7,8,10,11,11};

  **/
      int n;
      cin>>n;
      int a[n+1];
      int dif[n+1]={0};
      for(int i=0;i<n;i++)cin>>a[i];
      int q;
      cin>>q;
      while(q--)
      {
          int l, r, v;
          cin>>l>>r>>v;
          dif[l]+=v;
          dif[r+1]-=v;
      }
      for(int i=1;i<n;i++) dif[i]+=dif[i-1];
      for(int i=0;i<n;i++) a[i]+=dif[i];
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
      cout<<endl;
}
