#include <iostream>
#include <string>
using namespace std;
int pow(int n, int e)
{
    if (e == 1)
    {
        return n;
    }
    if (e == 0)
    {
        return 1;
    }
    return n * pow(n, e - 1);
}
int main()
{
    cout << pow(2, 5);
    return 0;
}