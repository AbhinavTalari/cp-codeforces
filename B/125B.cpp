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


//125B XML
int main()
{

    string x;
    cin>>x;
    int current_space=0;
    for(int i=0;i<=x.length();i++)
    {

            if(x[i]=='<'&&x[i+2]=='>')
            {   for(int j=0;j<current_space;j++)
                cout<<" ";
                cout<<x[i]<<x[i+1]<<x[i+2]<<endl;
                current_space+=2;
            }
            if(x[i]=='<'&&x[i+1]=='/'&&x[i+3]=='>')
            {
                current_space-=2;
                for(int j=0;j<current_space;j++)
                cout<<" ";
                cout<<x[i]<<x[i+1]<<x[i+2]<<x[i+3]<<endl;
                

            }

        
    }   

}