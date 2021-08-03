#include <iostream>

using namespace std;

int main()
{
    long long int n, n2, n3, rem, arr[10], i = 0, total = 0, a[10];
    cin >> n;

    n2 = n * 2;
    n3 = n * 3;

    while (n > 0)
    {
        rem = n % 10;
        arr[i] = rem;
        n = n / 10;
        i++;
    }
    while (n2 > 0)
    {
        rem = n2 % 10;
        arr[i] = rem;
        n2 = n2 / 10;
        i++;
    }
    while (n3 > 0)
    {
        rem = n3 % 10;
        arr[i] = rem;
        n3 = n3 / 10;
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        total = total + arr[j];
    }
    // fflush(stdin);
    if (total == 45)
    {
        cout << "Fascinating No. " << endl;
    }
    else
    {
        cout << "Not A fascinating No." << endl;
    }
    return 0;
}
