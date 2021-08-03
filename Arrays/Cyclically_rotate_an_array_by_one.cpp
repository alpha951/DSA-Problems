#include <iostream>
#include <stdio.h>
using namespace std;
void cyclicrotate(int a[], int n)
{ // 5 1 1 1 1
    // int temp1 = a[n - 1];
    // for (int i = 1; i < n; i++)
    // {
    //     int temp;
    //     temp = a[i];
    //     a[i] = a[i - 1];
    // }
    // a[0] = temp1;
    // coreect method below
    int temp = 0;

    temp = a[n - 1];
    for (int i = n - 1; i >= 0; i--) // main thing
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
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
    cyclicrotate(a, n);

    return 0;
}