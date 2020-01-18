// wrong solution right now...
#include <bits/stdc++.h>
using namespace std;
bool coprime(int a, int b)
{
    if (__gcd(a, b) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        vector<int> rooms;
        vector<int> chest;
        vector<int> jems;
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            rooms.push_back(temp);
        }
        for (int i = 0; i < M; i++)
        {
            int temp;
            cin >> temp;
            chest.push_back(temp);
        }
        for (int i = 0; i < M; i++)
        {
            int temp;
            cin >> temp;
            jems.push_back(temp);
        }

        map<int, int> data;
        for (int i = 0; i < N; i++)
        {
            int temp = 0;
            for (int j = 0; j < M; j++)
            {
                if (!coprime(rooms[i], chest[j]))
                {
                    temp += jems[j];
                }
            }
            data[temp] = rooms[i];
        }
        auto it = data.rbegin();
        int res = 0;
        for (int i = 0; i < K; i++)
        {
            res += it->first;
            ++it;
        }
        cout << res << endl;
    }
    return 0;
}