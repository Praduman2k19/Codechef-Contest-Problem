#include <bits/stdc++.h>
using namespace std;
long long fun()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    cin>>arr[i];
    map<long long ,long long>m;
    for(long long i=0;i<n;i++)
    m[arr[i]]++;
    long long ans=0;
    for(long long i=0;i<n;i++)
        ans=max(ans,m[arr[i]]);


        if(n<=2)
        return 0;
        if(ans==1)
        ans=2;
        return n-ans;


}
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        cout<<fun()<<endl;
    }
}
