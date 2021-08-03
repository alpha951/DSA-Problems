#include <bits/stdc++.h>
using namespace std;

void reverseSubArray(int a[], int n, int k)
{
    int s = 0;
    int e = k - 1;
    while (s < e)
    {
        int temp;
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseSubArray(arr, n, k);

    return 0;
}