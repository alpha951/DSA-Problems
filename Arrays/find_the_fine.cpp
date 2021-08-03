#include <iostream>
#include <stdio.h>
using namespace std;
int fine_total(int car[], int date, int fine[], int n)
{
    int odd, even;
    odd = 0;
    even = 0;
    int fine_total = 0;
    for (int i = 0; i < n; i++)
    {
        if (car[i] % 2 == 0)
        {
            odd += fine[i];
        }
        else if (car[i] % 2 != 0)
        {
            even += fine[i];
        }
    }
    if (date % 2 == 0)
    {
        fine_total = even;
    }
    else if (date % 2 != 0)
    {
        fine_total = odd;
    }
    return fine_total;
}
int main()
{
    int date, n;
    cin >> n >> date;
    int fine[n];
    int car[n];
    for (int i = 0; i < n; i++)
    {
        cin >> car[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> fine[i];
    }

    cout << fine_total(car, date, fine, n) << endl;

    return 0;
}
