#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int bit = 0;
        int n = num;
        while (n)
        {
            bit++;
            n = n >> 1;
        }
        int z = (1 << bit);
        bit = bit - 1;
        int y = (1 << bit);
        cout<<(y-(z-num))<<" "<<(y)<<endl;
        // cout << (z - x) << endl;
    }

    return 0;
}