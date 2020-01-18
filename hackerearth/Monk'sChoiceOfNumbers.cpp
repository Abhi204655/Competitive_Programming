#include<bits/stdc++.h>
using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> num;
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            num.push_back(temp);
        }
        multimap<int, int> data;

        for (int i = 0; i < N; i++)
        {
            data.insert(make_pair(countBits(num[i]), num[i]));
        }
        auto it = data.rbegin();
        int res = 0;

        for (int i = 0; i < K; i++)
        {
            res += it->first;
            it++;
        }
        cout << res << endl;
    }
    return 0;
}
