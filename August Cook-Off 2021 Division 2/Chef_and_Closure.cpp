#include <iostream>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt=0,cnt2=0,one=0,minusone=0;
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]<-1)
            cnt++;
           if(arr[i]>1)
              cnt++;
           if(arr[i]==-1)
              minusone++;
           if(arr[i]==1)
               one++;
       }
       if(cnt>1)
         return 0;
         if(cnt==1)
       {
           if(minusone==0)
            return 1;
            else
            return 0;
       }
       else if(cnt==0)   
       {
           if(minusone==0)
           return 1;
           else if(minusone==1)
           return 1;
           else if(minusone>=2&&one==0)
           return 0;
       } 
       
       return 1;
                
         
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
}
