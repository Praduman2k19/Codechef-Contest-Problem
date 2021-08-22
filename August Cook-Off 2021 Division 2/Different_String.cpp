#include <bits/stdc++.h>
using namespace std;
string fun()
{
    int n;
    cin>>n;
    string arr[n];
    unordered_map<string,int>map;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        map[arr[i]]=1;
    }
    string s="";
    for(int i=0;i<n;i++)
    {
        s+='0';
    }
    if(map[s]==0)
       return s;
    for(int i=0;i<n;i++)
    {
        s[i]='1';
        if(map[s]==0)
          return s;
    }
    return "";

}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cout<<fun()<<endl;
    }
}
