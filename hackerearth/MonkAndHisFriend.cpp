#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countSetBits(ll n)
{
    ll count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll M, P;
        cin >> M >> P;
        ll temp = M ^ P;
        cout << countSetBits(temp) << endl;
    }
    return 0;
}