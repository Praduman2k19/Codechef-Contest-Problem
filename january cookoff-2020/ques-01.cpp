#include<bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    long long n=1000005;
    vector<long long>v;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (long long p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
   v.push_back(0);
   v.push_back(0);
   v.push_back(0);
   v.push_back(0);
   v.push_back(0);
   long long count=0,a=3;
    for(long long i=5;i<n;i++)
    {
        if(prime[i]==true)
           {
               if((i-a)==2){
                v.push_back(++count);
               }
               else
               v.push_back(count);
               a=i;
           }
    }
    // for(long long i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
   long long testcase;
   cin>>testcase;
    while(testcase--)
    {
        long long num;
        cin>>num;
        
        cout<<v[num]<<endl;
    }
    return 0;
}
