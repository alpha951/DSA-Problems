#include <bits/stdc++.h>
using namespace std;
int noble(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = a[i];
            if (a[i] < a[j])
            {
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int mid = 0;
    if (n % 2 == 0)
    {
        mid = n / 2;
    }
    else if (n % 2 != 0)
    {
        mid = (n / 2) - 1;
    }
    // int start = 0;   // 5 3 2
    // int end = n - 1; // 1
    // mid = (n / 2) - 1;

    if (a[mid] == n - mid - 1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
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
    cout << noble(a, n) << endl;
    return 0;
}