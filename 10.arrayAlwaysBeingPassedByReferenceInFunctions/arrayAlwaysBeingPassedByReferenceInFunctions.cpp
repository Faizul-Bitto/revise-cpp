#include <bits/stdc++.h>
using namespace std;

int doSomething(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int result = arr[i] += 100;
        cout << result << " ";
    }

    return 0;
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}