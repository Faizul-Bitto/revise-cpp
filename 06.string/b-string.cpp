#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World!";

    int length = str.size();

    cout << length << endl;

    cout << str[length - 2] << endl;

    str[length - 1] = 'z';

    cout << str;

    return 0;
}