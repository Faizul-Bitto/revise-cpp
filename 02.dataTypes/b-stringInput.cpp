#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    //* if we write "Hello World" -> It will only pring "Hello". "World" will not be printed
    cin >> a;
    cout << a;

    //* it will take two strings
    string b, c;
    cin >> b >> c;
    cout << b << " " << c;
    return 0;

    //* if we want to take a whole sentence, we can write like this with gaps:
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}