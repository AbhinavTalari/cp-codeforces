#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define v vector
#define pb push_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define UN(v) sort((v).begin(), (v).end()), v.erase(unique(v.begin(), v.end()), v.end())
#define N 31622779
#define mod 998244353


// 71-A Way too long words
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=0;
    
    for(int i=0;i<n-1;i++)
    {   
        int t=0;
        while(i+int(pow(2,t))<n)
            t++;
            t=t-1;
        a[i+int(pow(2,t))]+=a[i];
        ans+=a[i];
        a[i]=0;
        cout<<ans<<endl;
            
    }
        
       

      
    
    

    
   
    

    

    
    return 0;

}