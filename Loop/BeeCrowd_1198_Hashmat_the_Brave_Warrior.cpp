#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    ll a, b;
    while (cin>>a>>b)
    {
        cout<<abs(b-a)<<endl;
    }
}