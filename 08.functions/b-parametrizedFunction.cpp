#include <bits/stdc++.h>
using namespace std;

//! void doesn't return anything
void helloWorld(string name)
{
    cout << "Hello " << name << "!" << endl;
}

int main()
{
    string name;
    cin >> name;
    //! calling a function
    helloWorld(name);
    return 0;
}