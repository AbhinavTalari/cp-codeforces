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

    ll a,b;
    cin>>a>>b;

    ll n=a+b+1;
    vector<ll>h(n);
    for(int i=0;i<n;i++)
    {
        h[i]=i+1;
    }

    reverse(h.begin()+a,h.end());
    for(int i=0;i<n;i++)
    cout<<h[i]<<" ";
    return 0;

}