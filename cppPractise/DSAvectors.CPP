#include <iostream>
#include <string>
#include <vector>
using namespace std;
// vectors
int main()
{
    vector<string> name = {"adil", "shaik", "mahammad"};
    name.push_back("azam");       // adding elements
    name.pop_back();              // removing elements
    cout << name.size() << "\n";  // to check size of a vector
    cout << name.empty() << "\n"; // to check if vector is empty or not
    for (string names : name)
    {
        cout << names << "\n";
    }
    cout << name[0] << "\n";      // accessing elements using index
    cout << name.back() << "\n";  // accessing last element using .back() function
    cout << name.front() << "\n"; // accessing first element using .front() function
    name[1] = "moin";             // changing elements using index
    cout << name[1] << "\n";
    return 0;
}