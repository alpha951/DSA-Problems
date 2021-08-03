#include <bits/stdc++.h>
#include <string>
using namespace std;
string reverseWord(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    return s;
}

int main()
{
    cout << "enter the length" << endl;
    int n;
    cin >> n;
    char s[n];
    cout << "enter string" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }
    cout << reverseWord(s) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << endl;
    // }

    return 0;
}

// string reverseWord(string str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     { // to get the length of array
//         i++;
//     }
//     if (i % 2 == 1) //odd
//     {
//         for (int j = 0; j <= i / 2; j++)
//         {
//             int temp = str[j];
//             str[j] = str[i - j - 1];
//             str[i - j - 1] = temp;
//         }
//     }
//     else if (i % 2 == 0) //even
//     {
//         for (int j = 0; j < i / 2; j++)
//         {
//             int temp = str[j];
//             str[j] = str[i - j - 1];
//             str[i - j - 1] = temp;
//         }
//     }
//     return str;
// }