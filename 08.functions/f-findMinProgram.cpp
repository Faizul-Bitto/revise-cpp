#include <bits/stdc++.h>
using namespace std;

int minimum(int number1, int number2)
{
    if (number1 < number2)
    {
        return number1;
    }
    else
    {
        return number2;
    }
}

int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    int result = minimum(number1, number2);
    cout << result << endl;

    return 0;
}