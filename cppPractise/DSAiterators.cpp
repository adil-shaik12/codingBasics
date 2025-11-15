#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> name = {"abc", "pqr", "xyz"};
    vector<string>::iterator x;
    for (auto x = name.begin(); x != name.end(); ++x)
    {
        cout << *x << "\n";
    }
    x = name.begin() + 2;
    cout << *x << "\n";
    x = name.end() - 3;
    cout << *x << "\n";
    x = name.begin();
    *x = "asd";
    cout << *x << "\n";
    return 0;
}
