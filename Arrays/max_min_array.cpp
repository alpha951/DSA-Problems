#include <bits/stdc++.h>
using namespace std;
int min(int a[], int n)
{
    sort(a, a + n);
    return a[0];
}
int max(int a[], int n)
{
    sort(a, a + n);
    return a[n - 1];
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "min is" << min(a, n) << " "
         << "max is" << max(a, n) << endl;

    return 0;
}