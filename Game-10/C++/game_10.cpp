#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, a;

    cin >> n >> d >> a;

    cout << (d + n - a) % n;

    return 0;
}