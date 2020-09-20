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

ll fibonnaci(ll x)
{
    if(x<=0)
    return x;

    else
    {
        return fibonnaci(x-1)+fibonnaci(x-2);
    }
    
}


int main()
{
    ll n;
    cin>>n;
    cout<<fibonnaci(n)<<endl;
     
    return 0;

}