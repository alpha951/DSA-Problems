#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    // Write C++ code here
    int n;
    cin >> n;
    int a[n];
    cout << "keshav" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sum(a, n);
    return 0;
}