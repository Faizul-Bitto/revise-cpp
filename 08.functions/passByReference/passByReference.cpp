#include <bits/stdc++.h>
using namespace std;

int doSomething(int &number)
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

    cout << number << endl; //! we will get the updated value because we have passed by reference. So, if we change the value, it will change the original value also.

    return 0;
}