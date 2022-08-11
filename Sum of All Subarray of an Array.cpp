#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*(n-i+1))*a[i];
    }
    return sum;
}
int main()
{
    /*
     index= 1 2 3 4
     array=3 2 4 1
     ///Sub array
     3- 3,2- 3,2,4- 3,2,4,1- 2- 2,4- 2,4,1- 4- 4,1,- 1,
    */
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<solve(a,n)<<endl;
    }
}
