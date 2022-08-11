#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v, int n)
{
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c=0;
    while(next_permutation(v.begin(),v.end()))
    {
        c++;
        print(v,n);
    }
    cout<<c<<endl;
}
