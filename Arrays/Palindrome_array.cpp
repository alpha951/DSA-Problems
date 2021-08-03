#include <iostream>
#include <stdio.h>
using namespace std;

// int reverse(int m)
// {
//     int rev = 0;
//     int temp = m;
//     while (temp != 0)
//     {

//         int rem = temp % 10;
//         temp = temp / 10;
//         rev = rev * 10 + rem;
//     }
//     return rev;
// }

int PalinArray(int a[], int n)
{
    int test = 0;

    for (int i = 0; i < n; i++)
    {
        int rev = 0;
        int temp = a[i];
        while (temp != 0)
        {

            int rem = temp % 10;
            temp = temp / 10;
            rev = rev * 10 + rem;
        }

        if (rev == a[i])
        {
            test++;
        }
    }
    if (test == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int T, n;
    // cin >> T;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << PalinArray(a, n) << endl;

    return 0;
}
