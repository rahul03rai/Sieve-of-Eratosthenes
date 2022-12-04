#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, p[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> p[i];
    }
    sort(p, p + m);
    int min = p[n-1] - p[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (p[i+n-1] - p[i] < min)
        {
            min = p[i+n-1] - p[i];
        }
    }
    cout << min<< endl;
    return 0;
}
