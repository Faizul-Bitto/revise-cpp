#include <bits/stdc++.h>
using namespace std;

int summation(int number1, int number2)
{
    int summation = number1 + number2;
    return summation;
}

int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    int result = summation(number1, number2);

    cout << result << endl;

    return 0;
}