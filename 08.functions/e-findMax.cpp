#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    int result = max(number1, number2); //! we have used the built in c++ 'max' function to get the minimum value
    cout << result << endl;

    return 0;
}