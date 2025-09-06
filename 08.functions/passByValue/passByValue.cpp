#include <bits/stdc++.h>
using namespace std;

int doSomething(int number)
{
    number += 2;
    cout << number << endl;

    number += 2;
    cout << number << endl;

    return number;
}

int main()
{
    int number;
    cin >> number;
    cout << endl;

    cout << number << endl;

    doSomething(number);
    cout << endl;

    cout << number << endl; //! we will get the original value, because we have passed by value. So what it does, it takes a copy of the value, and works on it.

    return 0;
}